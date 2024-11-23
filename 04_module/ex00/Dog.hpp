/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:19:37 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 15:36:58 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Dog: public Animal {

	public:
		Dog( void );
		~Dog( void );
		Dog( const Dog &other );
		Dog &operator=( const Dog &other );
	
		void	makeSound( void ) const;

};

#endif // !DOG_HPP