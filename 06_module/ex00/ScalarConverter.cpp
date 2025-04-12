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

static void printChar(double n){

	if (n < std::numeric_limits<char>::min() || n > std::numeric_limits<char>::max())
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<char>(n)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(n) << "'"<< std::endl;
	return ;
}

static void printInt(double n){

	std::cout << "int: " << static_cast<int>(n) << std::endl;
	return ;
}

static void printFloat(double n){

	std::cout << "float: " << std::fixed << std::setprecision(1)
		<< static_cast<float>(n) << "f" << std::endl;
	return ;
}

static void printDouble(double n){

	std::cout << "double: " << static_cast<double>(n) << std::endl;
	return ;
}


void ScalarConverter::Converter(const std::string input){

	char *final;
	double n = std::strtod(input.c_str(), &final);

	if (input.size() == 1 && !std::isdigit(input[0])){
		n = static_cast<char>(input[0]);
	} else if (*final != '\0' && final[0] == 'f' && std::strlen(final) == 1){
		n = std::strtof(input.c_str(), NULL);
	} else if (*final != '\0' && input.size() && input.find(".")){
		n = std::strtod(input.c_str(), NULL);
	} else if (*final == '\0' && static_cast<ssize_t>(input.find_last_not_of("-+0123456789") == -1)){
		n = std::atoi(input.c_str());
	} else {
		std::cout << "não sei que caso é esse" << std::endl;
	}

	printChar(n);
	printInt(n);
	printFloat(n);
	printDouble(n);
}
