/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:38:04 by ishenriq          #+#    #+#             */
/*   Updated: 2024/10/10 20:14:52 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class	ClapTrap {

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	setName(std::string	const &name);
		void	setHitPoint(unsigned int const &hitPoint);
		void	setEnergyPoint(unsigned int const &energyPoint);
		void	setAttackDamage(unsigned int const &attackDamage);

		std::string	getName(void) const;
		unsigned	getHitPoint(void) const;
		unsigned	getEnergyPoint(void) const;
		unsigned	getAttackDamage(void) const;

	private:
		std::string _name
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;
}

#endif
