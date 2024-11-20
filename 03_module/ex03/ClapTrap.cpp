/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:45:14 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/20 16:59:58 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
 * Constructors
*/

ClapTrap::ClapTrap(void){
	std::cout << "Constructor" << std::endl;
	setHitPoint(10);
	setEnergyPoint(10);
	setAttackDamage(0);
};

ClapTrap::ClapTrap(std::string name){
	std::cout << "Name constructor" << std::endl;
	setName(name);
	setHitPoint(10);
	setEnergyPoint(10);
	setAttackDamage(0);
};

ClapTrap::ClapTrap(const ClapTrap &other){
	std::cout << "Copy constructor" << std::endl;
	*this = other;
};

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
	std::cout << "Assignment constructor" << std::endl;
	if (this != &other){
		setName(other.getName());
		setHitPoint(other.getHitPoint());
		setEnergyPoint(other.getEnergyPoint());
		setAttackDamage(other.getAttackDamage());
	}
	return *this;
};

ClapTrap::~ClapTrap(void){
	std::cout << "Destructor" << std::endl;
};

/*
 *  Member Functions
*/

void	ClapTrap::attack(const std::string &target){
	if (getHitPoint() <= 0)
		std::cout << "ClapTrap " << getName() << " is already dead" << std::endl;
	else if (target.empty())
		std::cout << "Target is empty" << std::endl;
	else if (getEnergyPoint() > 0){
		std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of  damage!" << std::endl;
		setEnergyPoint(getEnergyPoint() - 1);
	}
	else
		std::cout << "There are not more energy points to attack!" << std::endl;
};

void	ClapTrap::takeDamage(unsigned int amount){
	if (getHitPoint() <= 0)
		std::cout << "ClapTrap " << getName() << " is already dead" << std::endl;
	else if (amount < 0)
		std::cout << "Amount is negative" << std::endl;
	else if (amount <= getHitPoint()){
		std::cout << "ClapTrap " << getName() << " take " <<  amount << " points of  damage!" << std::endl;
		setHitPoint(getHitPoint() - amount);
	}
	else{
		std::cout << "ClapTrap " << getName() << " take " <<  amount << " points of  damage, and Dies" << std::endl;
		setHitPoint(0);
	}
};

void	ClapTrap::beRepaired(unsigned int amount){
	if (getHitPoint() <= 0)
		std::cout << "ClapTrap " << getName() << " is already dead" << std::endl;
	else if (amount < 0)
		std::cout << "Amount is negative" << std::endl;
	else if (getEnergyPoint() > 0){
		std::cout << "ClapTrap " << getName() << " repairs " << amount << " points of hitPoints!" << std::endl;
		setHitPoint(getHitPoint() + amount);
		setEnergyPoint(getEnergyPoint() - 1);
	}
	else
		std::cout << "There are not more energy points to recover!" << std::endl;
};

/*
 * Set Functions
*/

void	ClapTrap::setName(std::string	const &name){
	if (!name.empty())
		this->_name = name;
	else
		std::cout << "Name is empty" << std::endl;
};

void	ClapTrap::setHitPoint(unsigned int const &hitPoint){
	if (hitPoint >= 0)
		this->_hitPoints = hitPoint;
	else
		std::cout << "hitPoint is negative" << std::endl;
};

void	ClapTrap::setEnergyPoint(unsigned int const &energyPoint){
	if (energyPoint >= 0)
		this->_energyPoints = energyPoint;
	else
		std::cout << "energyPoint is negative" << std::endl;

};

void	ClapTrap::setAttackDamage(unsigned int const &attackDamage){
	if (attackDamage >= 0)
		this->_attackDamage = attackDamage;
	else
		std::cout << "attackDamage is negative" << std::endl;
};

/*
 * Get Functions
*/

std::string		ClapTrap::getName(void) const {return _name ;}
unsigned int	ClapTrap::getHitPoint(void) const { return _hitPoints; }
unsigned int 	ClapTrap::getEnergyPoint(void) const { return _energyPoints; }
unsigned int	ClapTrap::getAttackDamage(void) const { return _attackDamage; }
