/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:54:24 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 17:52:43 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal {

  protected:
    std::string _type;

  public:
	AAnimal( void );
	virtual ~AAnimal( void );
	AAnimal( const AAnimal &other );
	AAnimal &operator=( AAnimal const &other );

	virtual const	std::string getType( void ) const;
	virtual void	makeSound( void ) const = 0;
};

#endif // !ANIMAL_HPP
