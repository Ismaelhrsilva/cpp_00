/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:00:39 by ishenriq          #+#    #+#             */
/*   Updated: 2025/04/12 19:12:19 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void){}

ScalarConverter::~ScalarConverter(void){}

ScalarConverter::ScalarConverter(const ScalarConverter &other){
	*this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other){
	if (this == &other){
		return *this;
	}
	return *this;
}

static void printChar(double n, bool ok){

	if (not ok || n < std::numeric_limits<char>::min() || n > std::numeric_limits<char>::max()
		|| std::isnan(n) || std::isinf(n))
		std::cout << "char: impossible" << std::endl;
	else if (not std::isprint(static_cast<char>(n)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(n) << "'"<< std::endl;
}

static void printInt(double n, bool ok){

	if (not ok || n < std::numeric_limits<int>::min() || n > std::numeric_limits<int>::max()
		|| std::isnan(n) || std::isinf(n))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(n) << std::endl;
}

static void printFloat(double n, bool ok, bool signal){

	if ((ok && n >= std::numeric_limits<float>::min() && n <= std::numeric_limits<float>::max())
		|| std::isnan(n) || std::isinf(n))
	  std::cout << "float: " << (signal ? "+": "") <<std::fixed << std::setprecision(1)
		<< static_cast<float>(n) << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;
}

static void printDouble(double n, bool ok, bool signal){

	if ((ok && n >= std::numeric_limits<double>::min() && n <= std::numeric_limits<double>::max())
		|| std::isnan(n) || std::isinf(n))
		std::cout << "double: " << (signal ? "+": "") << static_cast<double>(n) << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
}


void ScalarConverter::Converter(const std::string input){

	char *final = NULL;
	bool ok = true;
	bool signal = false;
	double n = std::strtod(input.c_str(), &final);

	if (input.size() == 1 && !std::isdigit(input[0])){
		n = static_cast<char>(input.at(0));
	} else if ((final[0] == 'f' && std::strlen(final) == 1
		&& static_cast<ssize_t>(input.find(".")) != -1) || input == "-inff"
		|| input == "+inff" || input == "inff" || input == "nanf"){
		n = std::strtof(input.c_str(), NULL);
	} else if ((not std::strlen(final) && input.size() && input.find("."))
		|| input == "-inf" || input == "inf" || input == "+inf" || input == "nan"){
		n = std::strtod(input.c_str(), NULL);
	} else if (not std::strlen(final) && not std::isnan(n) && not std::isinf(n)
		&& input.find_last_not_of("-+0123456789") == std::string::npos){
		n = std::atoi(input.c_str());
	} else {
		ok = false;
	}
	if (input == "+inff" || input == "+inf"){
	  signal = true;
	}

	printChar(n, ok);
	printInt(n, ok);
	printFloat(n, ok, signal);
	printDouble(n, ok, signal);
}
