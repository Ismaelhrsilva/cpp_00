/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:19:07 by ishenriq          #+#    #+#             */
/*   Updated: 2024/08/25 17:16:00 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB {

	private:
		Weapon	*_weapon;
		std::string _name;

	public:
		HumanB(std::string name);
		~HumanB(void);

		void	attack( void );
		void	setWeapon(Weapon &weapon);
};

#endif // ! HUMANB_HPP
