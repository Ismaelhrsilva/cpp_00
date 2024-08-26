/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:43:04 by ishenriq          #+#    #+#             */
/*   Updated: 2024/08/26 17:04:48 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ){
	FuncComplain[DEBUG] = &Harl::debug;
	FuncComplain[INFO] = &Harl::info;
	FuncComplain[WARNING] = &Harl::warning;
	FuncComplain[ERROR] = &Harl::error;
	this->_signal = 0;
};

Harl::~Harl( void ){};

int	Harl::getSignal( void ){ 
	return this->_signal;
};

void Harl::debug( void ){
	std::cout << "[ DEBUB ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
};

void Harl::info( void ){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
};

void Harl::warning( void ){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been"
				"coming for years whereas you started working here since last month.\n "
				<< std::endl;
};
void Harl::error( void ){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
};

void Harl::complain( std::string level ){

	std::string whatComplain[4]  = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++){
		if (!level.compare(whatComplain[i])){
			this->_signal = 1;
			switch (i){
				case DEBUG:
					(this->*FuncComplain[0])();
				case INFO:
					(this->*FuncComplain[1])();
				case WARNING:
					(this->*FuncComplain[2])();
				case ERROR:
					(this->*FuncComplain[3])();}
		};
	};
};
