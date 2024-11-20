/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:29:22 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/20 18:15:43 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {

	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const &other);
		ScavTrap(std::string const &name);
		~ScavTrap(void);

		ScavTrap &operator=(ScavTrap const &other);

		void	attack(const std::string &target);
		void	guardGate(void);
};

#endif

