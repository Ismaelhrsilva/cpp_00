/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:15:17 by ishenriq          #+#    #+#             */
/*   Updated: 2024/08/25 16:47:25 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ):_type(type){};

Weapon::~Weapon( void ){};

std::string	Weapon::getType( void ) const {
	return this->_type;
};

void	Weapon::setType( std::string newType ){
	this->_type = newType;
};
