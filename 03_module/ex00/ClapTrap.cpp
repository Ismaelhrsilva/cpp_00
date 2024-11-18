/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:45:14 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/18 19:20:06 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap(void);
ClapTrap(std::string name);
ClapTrap(const ClapTrap &other);
ClapTrap &operator=(const ClapTrap &other);
~ClapTrap(void);

void	attack(const std::string &target);
void	takeDamage(unsigned int amount);
void	beRepaired(unsigned int amount);

void	setName(std::string	const &name);
void	setHitPoint(unsigned int const &hitPoint);
void	setEnergyPoint(unsigned int const &energyPoint);
void	setAttackDamage(unsigned int const &attackDamage);

std::string	getName(void) const;
unsigned int	getHitPoint(void) const;
unsigned int 	getEnergyPoint(void) const;
unsigned int	getAttackDamage(void) const;
