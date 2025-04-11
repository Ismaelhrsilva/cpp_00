/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:00:39 by ishenriq          #+#    #+#             */
/*   Updated: 2025/04/11 19:51:33 by ishenriq         ###   ########.fr       */
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

void ScalarConverter::Converter(const std::string input){

	if (input.size() == 1 && !std::isdigit(input[0])){
		char c = input[0];

		std::cout << "char: " << c << std::endl;
		std::cout << "int :" << static_cast<int>(c) << std::endl;
		std::cout << "float :" << std::fixed << std::setprecision(1)
			<< static_cast<float>(c) << "f" << std::endl;
		std::cout << "double :" << static_cast<double>(c) << std::endl;
		return ;
	}


	std::cout << "char: " << input << std::endl;
	std::cout << "int: " << input << std::endl;
	std::cout << "float: " << input << std::endl;
	std::cout << "double: " << input << std::endl;

}
