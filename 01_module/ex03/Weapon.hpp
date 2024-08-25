/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:12:20 by ishenriq          #+#    #+#             */
/*   Updated: 2024/08/25 16:17:57 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {

	private:
		std::string _type;

	public:
		Weapon( std::string type );
		~Weapon( void );
		std::string	getType( void ) const ;
		void	setType( std::string newType );

};

#endif // ! WEAPON_HPP
