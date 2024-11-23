/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:29:39 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 16:54:54 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
# include "Brain.hpp"

Cat::Cat( void ){

	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::~Cat( void ){

	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat::Cat( const Cat &other ): Animal(other) {

	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain();
	*this = other;
}

Cat &Cat::operator=( const Cat &other ){

	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other){
		_type = other._type;
		*_brain = *other._brain;
	}
	return *this;
}

void	Cat::makeSound( void ) const {

	std::cout << "Miau miau miau" << std::endl;
}
