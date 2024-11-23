/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:29:39 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 15:44:30 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ){

	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
}

Cat::~Cat( void ){

	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat( const Cat &other ): Animal(other) {

	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat &Cat::operator=( const Cat &other ){

	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other){
		_type = other._type;
	}
	return *this;
}

void	Cat::makeSound( void ) const {

	std::cout << "Miau miau miau" << std::endl;
}
