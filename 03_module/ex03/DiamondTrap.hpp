/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:29:22 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/20 18:36:01 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP 

# include <string>
# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {

	public:
		DiamondTrap(void);
		DiamondTrap(DiamondTrap const &other);
		DiamondTrap(std::string const &name);
		~DiamondTrap(void);

		DiamondTrap &operator=(DiamondTrap const &other);

		void		setName(std::string const &name);
		std::string	getName(void) const;

		using	ScavTrap::attack;
		void	whoAmI();

	private:
		std::string	_name;
};

#endif

