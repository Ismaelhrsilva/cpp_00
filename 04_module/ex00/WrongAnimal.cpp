/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:54:16 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 16:15:25 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal( void ){

	_type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void ){

	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &other ){

	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &other ){

	std::cout << "WrongAnimal copy assignment operator called";

	if (this != &other){
		_type = other._type;
	}
	return *this;
}

const	std::string WrongAnimal::getType( void ) const{
	
	return _type;
}

void	WrongAnimal::makeSound( void ) const{

	std::cout << "WrongAnimal sound" << std::endl;
}
