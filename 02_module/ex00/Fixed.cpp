/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:36:18 by ishenriq          #+#    #+#             */
/*   Updated: 2024/08/26 19:16:09 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ):_value(0){
	std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed( const Fixed &other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
};

Fixed &Fixed::operator=( const Fixed &other ){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		this->_value = other.getRawBits();}
	return *this;
};

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
};

void Fixed::setRawBits( int const raw ){
	this->_value = raw;
};