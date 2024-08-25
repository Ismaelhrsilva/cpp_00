/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:26:33 by ishenriq          #+#    #+#             */
/*   Updated: 2024/08/25 16:54:17 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string name, Weapon &weapon ): _weapon(weapon), _name(name){};

HumanA::~HumanA(void){};

void	HumanA::attack( void ){
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
};
