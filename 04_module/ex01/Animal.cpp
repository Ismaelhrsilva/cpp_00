/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:54:16 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 16:11:16 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal( void ){

	_type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal( void ){

	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal( const Animal &other ){

	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal	&Animal::operator=( const Animal &other ){

	std::cout << "Animal copy assignment operator called";

	if (this != &other){
		_type = other._type;
	}
	return *this;
}

const	std::string Animal::getType( void ) const{
	
	return _type;
}

void	Animal::makeSound( void ) const{

	std::cout << "Animal sound" << std::endl;
}
