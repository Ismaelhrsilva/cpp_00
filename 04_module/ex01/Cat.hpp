/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:27:44 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 16:49:05 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {

	private:
		Brain* _brain;
	
	public:
		Cat( void );
		~Cat( void );
		Cat( const Cat &other );
		Cat	&operator=( const Cat &other );

		void	makeSound( void ) const;

};

#endif // !CAT_HPP
