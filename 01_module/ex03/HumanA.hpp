/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:19:07 by ishenriq          #+#    #+#             */
/*   Updated: 2024/08/25 16:42:45 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA {

	private:
		Weapon	&_weapon;
		std::string _name;

	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA(void);

		void	attack( void );

};

#endif // ! HUMANA_HPP
