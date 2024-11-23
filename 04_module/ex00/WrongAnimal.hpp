/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:54:24 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 16:15:49 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal {

  protected:
    std::string _type;

  public:
	WrongAnimal( void );
	virtual ~WrongAnimal( void );
	WrongAnimal( const WrongAnimal &other );
	WrongAnimal &operator=( WrongAnimal const &other );

	const	std::string getType( void ) const;
	virtual void	makeSound( void ) const;
};

#endif // !ANIMAL_HPP
