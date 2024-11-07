/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 21:39:31 by ishenriq          #+#    #+#             */
/*   Updated: 2024/08/24 22:23:27 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {

	private:
		std::string	_name;
	
	public:
	
		Zombie( std::string name );
		~Zombie( void );
		void	announce( void ) const;

};

Zombie* newZombie(std:: string name);
void	randomChump(std::string name);

#endif
