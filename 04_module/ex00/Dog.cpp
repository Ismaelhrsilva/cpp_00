/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:23:23 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 15:45:45 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ){

	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
}

Dog::~Dog( void ){

	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog( const Dog &other ): Animal(other) {

	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}

Dog &Dog::operator=( const Dog &other ){

	std::cout << "Dog copy assignment operator called" << std::endl;

	if (this != &other){
		_type = other._type;
	}
	return *this;
}

void	Dog::makeSound( void ) const {

	std::cout << "Au au au" << std::endl;
}
