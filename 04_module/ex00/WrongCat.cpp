/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:29:39 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 16:22:00 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ){

	std::cout << "WrongCat default constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::~WrongCat( void ){

	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &other ): WrongAnimal(other) {

	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=( const WrongCat &other ){

	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &other){
		_type = other._type;
	}
	return *this;
}

void	WrongCat::makeSound( void ) const {

	std::cout << "Wrong Miau miau miau" << std::endl;
}
