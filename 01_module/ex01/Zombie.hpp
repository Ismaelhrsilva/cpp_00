/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:39:37 by ishenriq          #+#    #+#             */
/*   Updated: 2024/08/24 23:10:41 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
#include <iostream>

class Zombie {

	private:
		std::string _name;

	public:
		Zombie( void );
		~Zombie(void );

		void	announce( void ) const;	
		void	setName( std::string name );
};

Zombie	*zombieHorde( int N, std::string &name );

#endif
