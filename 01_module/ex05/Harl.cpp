/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:43:04 by ishenriq          #+#    #+#             */
/*   Updated: 2024/08/25 19:19:54 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ){
	FuncComplain[DEBUG] = &Harl::debug;
	FuncComplain[INFO] = &Harl::info;
	FuncComplain[WARNING] = &Harl::warning;
	FuncComplain[ERROR] = &Harl::error;
};

Harl::~Harl( void ){};

void Harl::debug( void ){
	std::cout << "Debug" << std::endl;
};

void Harl::info( void ){
	std::cout << "Info" << std::endl;
};

void Harl::warning( void ){
	std::cout << "warning" << std::endl;
};
void Harl::error( void ){
	std::cout << "Error" << std::endl;
};

void Harl::complain( std::string level ){
	std::string whatComplain[4]  = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++){
		if (!level.compare(whatComplain[i]))
	  		(this->*FuncComplain[i])();
	}
};
