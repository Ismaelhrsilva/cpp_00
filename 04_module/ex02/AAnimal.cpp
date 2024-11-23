/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:54:16 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 17:56:00 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"


AAnimal::AAnimal( void ){

	_type = "AAnimal";
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::~AAnimal( void ){

	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal &other ){

	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = other;
}

AAnimal	&AAnimal::operator=( const AAnimal &other ){

	std::cout << "AAnimal copy assignment operator called";

	if (this != &other){
		_type = other._type;
	}
	return *this;
}

const	std::string AAnimal::getType( void ) const{
	
	return _type;
}
