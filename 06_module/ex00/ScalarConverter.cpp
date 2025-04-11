/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:00:39 by ishenriq          #+#    #+#             */
/*   Updated: 2025/04/11 19:26:25 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

ScalarConverter::ScalarConverter(void){}

ScalarConverter::~ScalarConverter(void){}

ScalarConverter::ScalarConverter(const ScalarConverter &other){
	*this = other;
}

ScalarConverter::ScalarConverter &operator=(const ScalarConverter &other){
	if (this == &other){
		return *this;
	}
	return *this;
}

ScalarConverter::static void Convert(std::string input){}
