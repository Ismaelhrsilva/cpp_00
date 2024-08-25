/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:26:33 by ishenriq          #+#    #+#             */
/*   Updated: 2024/08/25 17:21:54 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name): _weapon(NULL), _name(name) {};

HumanB::~HumanB(void){};

void	HumanB::attack( void ){
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << std::endl;
};

void	HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
};
