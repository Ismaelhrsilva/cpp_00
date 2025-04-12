/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:00:39 by ishenriq          #+#    #+#             */
/*   Updated: 2025/04/12 16:09:04 by ishenriq         ###   ########.fr       */
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

static void printChar(const std::string input){
		char c = input[0];

	std::cout << "char: " << c << std::endl;
	std::cout << "int :" << static_cast<int>(c) << std::endl;
	std::cout << "float :" << std::fixed << std::setprecision(1)
		<< static_cast<float>(c) << "f" << std::endl;
	std::cout << "double :" << static_cast<double>(c) << std::endl;
	return ;
}

static void printInt(double n){

	std::cout << "char: " << n << std::endl;
	std::cout << "int :" << static_cast<int>(n) << std::endl;
	std::cout << "float :" << std::fixed << std::setprecision(1)
		<< static_cast<float>(n) << "f" << std::endl;
	std::cout << "double :" << static_cast<double>(n) << std::endl;
	return ;
}

static void printFloat(double n){

	std::cout << "char: " << n << std::endl;
	std::cout << "int :" << static_cast<int>(n) << std::endl;
	std::cout << "float :" << std::fixed << std::setprecision(1)
		<< static_cast<float>(n) << "f" << std::endl;
	std::cout << "double :" << static_cast<double>(n) << std::endl;
	return ;
}

void ScalarConverter::Converter(const std::string input){

	char *final;
	double n = std::strtod(input.c_str(), &final);

	if (input.size() == 1 && !std::isdigit(input[0])){
		printChar(input);
		return ;
	}

	if (*final == '\0'){
		printInt(n);
	}

	if (*final != '\0' && final[0] == 'f' && std::strlen(final) == 1){
		printFloat(n);
	}

	/*std::cout << "char: " << input << std::endl;
	std::cout << "int: " << input << std::endl;
	std::cout << "float: " << input << std::endl;
	std::cout << "double: " << input << std::endl;*/
}
