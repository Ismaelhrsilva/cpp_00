/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:27:44 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 16:22:25 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

	public:
		WrongCat( void );
		~WrongCat( void );
		WrongCat( const WrongCat &other );
		WrongCat	&operator=( const WrongCat &other );

		void	makeSound( void ) const;

};

#endif // !CAT_HPP
