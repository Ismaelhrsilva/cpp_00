/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:23:23 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 16:54:30 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
# include "Brain.hpp"

Dog::Dog( void ){

	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::~Dog( void ){

	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog::Dog( const Dog &other ): Animal(other) {

	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain();
	*this = other;
}

Dog &Dog::operator=( const Dog &other ){

	std::cout << "Dog copy assignment operator called" << std::endl;

	if (this != &other){
		_type = other._type;
		*_brain = *other._brain;
	}
	return *this;
}

void	Dog::makeSound( void ) const {

	std::cout << "Au au au" << std::endl;
}
