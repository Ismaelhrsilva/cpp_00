/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:00:39 by ishenriq          #+#    #+#             */
/*   Updated: 2025/04/11 19:40:21 by ishenriq         ###   ########.fr       */
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

	

	std::cout << "char: " << input << std::endl;
	std::cout << "int: " << input << std::endl;
	std::cout << "float: " << input << std::endl;
	std::cout << "double: " << input << std::endl;

}
