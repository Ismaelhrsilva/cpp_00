/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:29:22 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/20 17:15:54 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

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

