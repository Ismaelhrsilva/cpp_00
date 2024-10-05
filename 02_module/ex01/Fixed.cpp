/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:02:30 by ishenriq          #+#    #+#             */
/*   Updated: 2024/10/05 14:32:11 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _value(0){
	std::cout << "Default constructor called" << std::endl;};

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;};

Fixed::Fixed(Fixed const &parameter){
	std::cout << "Copy constructor called" << std::endl;
	*this = parameter;};

Fixed::Fixed(int const number): _value(number * (1 << Fixed::_bits)){
	std::cout << "Int constructor called" << std::endl;};

Fixed::Fixed(float const number): _value(roundf(number * (1 << Fixed::_bits))){
	std::cout << "Float constructor called" << std::endl;};

Fixed &Fixed::operator=(const Fixed &parameter){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &parameter){ _value = parameter.getRawBits();}
	return (*this);};

float Fixed::toFloat(void) const {
	return ((float) this->getRawBits()) / (float)(1 << _bits);}

int	Fixed::toInt(void) const { return (_value >> _bits);}

void	Fixed::setRawBits(int const raw){ _value = raw;};
int		Fixed::getRawBits(void) const { return _value;};

std::ostream &operator<<(std::ostream &oS, Fixed const &parameter){
	oS << parameter.toFloat();
	return oS;}
