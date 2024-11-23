/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:42:06 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 16:47:13 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain( void ){

	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain( void ){

	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain( const Brain &other ){

	std::cout << "Brain copy constructor called" << std::endl;
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
	*this = other;
}

Brain &Brain::operator=( const Brain &other ){
	
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &other){
		for (size_t i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return *this;
}
