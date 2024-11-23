/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:54:24 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 16:10:24 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {

  protected:
    std::string _type;

  public:
	Animal( void );
	virtual ~Animal( void );
	Animal( const Animal &other );
	Animal &operator=( Animal const &other );

	const	std::string getType( void ) const;
	virtual void	makeSound( void ) const;
};

#endif // !ANIMAL_HPP
