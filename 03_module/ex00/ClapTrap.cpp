/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:45:14 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/17 19:23:29 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0){
	std::cout << "Default constructor called" << std::endl;};

ClapTrap::ClapTrap(std::string name):
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0){
	setName(name);
	std::cout << "Name constructor called" << std::endl;};

ClapTrap::ClapTrap(const ClapTrap &other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;};

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)	
	{
		setName(other._name);
		setHitPoint(other._hitPoints);
		setEnergyPoint(other._energyPoints);
		setAttackDamage(other._attackDamage);
	}
	return(*this);};

ClapTrap::~ClapTrap(void){
	std::cout << "Destructor called" << std::endl;};


std::string	ClapTrap::getName(void) const { return this->_name;}
unsigned int	ClapTrap::getHitPoint(void) const { return this->_hitPoints;}
unsigned int	ClapTrap::getEnergyPoint(void) const { return this->_energyPoints;}
unsigned int	ClapTrap::getAttackDamage(void) const { return this->_attackDamage;}

void	ClapTrap::setName(std::string	const &name) { _name = name;}
void	ClapTrap::setHitPoint(unsigned int const &hitPoint) { _hitPoints = hitPoint;}
void	ClapTrap::setEnergyPoint(unsigned int const &energyPoint) { _energyPoints = energyPoint;}
void	ClapTrap::setAttackDamage(unsigned int const &attackDamage) {_attackDamage = attackDamage;}

void	ClapTrap::attack(const std::string &target){
	if (target.empty()){
		std::cout << getName() << " cannot attack unnamed opponent" << std::endl;
		return ;
	}
	if (getEnergyPoint() < 0)
	{
		std::cout << "There are no more point of energy.. Attack failled!" << std::endl;
		return ;
	}
	setEnergyPoint(getEnergyPoint() - 1);
	std::cout << getName() << " attacks " << target << " , causing " << getAttackDamage() << " points of damage!" << std::endl;
};

void	ClapTrap::takeDamage(unsigned int amount){
	if (getHitPoint() > 0  && amount <= getHitPoint() && amount >= 0){
		setHitPoint(getHitPoint() - amount);
		std::cout << getName() << " take damage " << amount << std::endl;
	}
	else if (amount < 0)
		std::cout << "cannot take a negative damage!" << std::endl;
	else{
		if (!getHitPoint()){
			std::cout << getName() << " is dead!" << std::endl;
		}
		else if (amount > getHitPoint()){
			setHitPoint(0);
			std::cout << getName() << " take damage " << amount << std::endl;
		}
	}
};

void	ClapTrap::beRepaired(unsigned int amount){
	if (amount >= 0 &&  getEnergyPoint() > 0)
	{
		setHitPoint(getHitPoint() + amount);
		setEnergyPoint(getEnergyPoint() - 1);
		std::cout << getName() << " got " << amount << " hit points back" << std::endl;
	}
	else{
		if (amount < 0)
			std::cout << "cannot recover a negative points!" << std::endl;
		std::cout << "ClapTrap " << getName() << " has no energy to recorver itself.\n";
	}
};


