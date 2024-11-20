/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:37:02 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/20 17:08:03 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
 * Constructors
*/

ScavTrap::ScavTrap(void): ClapTrap() {
	std::cout << "ScavTrap Constructor" << std::endl;
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
};

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name) {
	std::cout << "ScavTrap name constructor" << std::endl;
	setName(name);
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
};

ScavTrap::ScavTrap(ScavTrap const &other): ClapTrap(other) {
	std::cout << "ScavTrap copy constructor" << std::endl;
	*this = other;
};

ScavTrap &ScavTrap::operator=(ScavTrap const &other){
	std::cout << "ScavTrap assignment constructor" << std::endl;
	if (this != &other){
		ClapTrap::operator=(other);
		setName(other.getName());
		setHitPoint(other.getHitPoint());
		setEnergyPoint(other.getEnergyPoint());
		setAttackDamage(other.getAttackDamage());
	}
	return *this;
};

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap destructor" << std::endl;
};

/*
 * Constructors
*/

void	ScavTrap::attack(const std::string &target){
	if (getHitPoint() <= 0)
		std::cout << "ScavTrap" << getName() << " is already dead" << std::endl;
	else if (target.empty())
		std::cout << "Target is empty" << std::endl;
	else if (getEnergyPoint() > 0){
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of  damage!" << std::endl;
		setEnergyPoint(getEnergyPoint() - 1);
	}
	else
		std::cout << "ScavTrap - There are not more energy points to attack!" << std::endl;
};

void	ScavTrap::guardGate(void){
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
};
