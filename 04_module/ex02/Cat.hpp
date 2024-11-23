/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:27:44 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 17:50:25 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal {

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
