/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:37:02 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/20 18:38:53 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#define	SUFF "_clap_name"

/*
 * Constructors
*/

DiamondTrap::DiamondTrap(void): ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap Constructor" << std::endl;
	ClapTrap::setName(std::string("unnamed") + SUFF);
	setName(std::string("unnamed") + SUFF);
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(30);
};


DiamondTrap::DiamondTrap(std::string const &name): 
	ClapTrap(name + SUFF), ScavTrap(name + SUFF), FragTrap(name + SUFF) {
	std::cout << "DiamondTrap name constructor" << std::endl;
	setName(name + SUFF);
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(30);
};

DiamondTrap::DiamondTrap(DiamondTrap const &other): ClapTrap(other), ScavTrap(other), FragTrap(other) {
	std::cout << "DiamondTrap copy constructor" << std::endl;
	*this = other;
};

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other){
	std::cout << "DiamondTrap assignment constructor" << std::endl;
	if (this != &other){
		setName(other.getName());
		setHitPoint(other.getHitPoint());
		setEnergyPoint(other.getEnergyPoint());
		setAttackDamage(other.getAttackDamage());
	}
	return *this;
};

DiamondTrap::~DiamondTrap(void){
	std::cout << "DiamondTrap destructor" << std::endl;
};

/*
 * Member Function 
*/

void	DiamondTrap::setName(std::string const &name) {this->_name = name ;}

std::string 	DiamondTrap::getName(void) const {return this->_name; }


void	DiamondTrap::whoAmI(){
	std::cout << "My ClapTrap name is " << ClapTrap::getName() << std::endl;
	std::cout << "My DiamondTrap name is " << getName() << std::endl;
};
