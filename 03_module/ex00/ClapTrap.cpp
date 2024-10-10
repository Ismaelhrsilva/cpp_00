/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:45:14 by ishenriq          #+#    #+#             */
/*   Updated: 2024/10/10 20:18:35 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):
	_hitPoint(10),
	_energyPoint(10),
	_attackDamage(0){
	std::cout << "Default constructor called" << std::endl;};

ClapTrap::ClapTrap(std::string name):
	_hitPoint(10),
	_energyPoint(10),
	_attackDamage(0){
	setName(name);
	std::cout << "Name constructor called" << std::endl;};

ClapTrap::~ClapTrap(void){
	std::cout << "Destructor called" << std::endl;};

ClapTrap::ClapTrap(const ClapTrap &other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;};

ClapTrap &operator=(const ClapTrap &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)	
	{
		setName(other.getName);
		setHitPoint(other.getHitPoint);
		setEnergyPoint(other.getEnergyPoint);
		setAttackDamage(other.getAttackDamage);
	}
	return(*this);};

void	ClapTrap::attack(const std::string &target){

};

void	takeDamage(unsigned int amount);
void	beRepaired(unsigned int amount);

void	ClapTrap::setName(std::string	const &name) { _name = name;}
void	ClapTrap::setHitPoint(unsigned int const &hitPoint) { _hitPoint = hitPoint;}
void	ClapTrap::setEnergyPoint(unsigned int const &energyPoint) { _energyPoint = energyPoint;}
void	ClapTrap::setAttackDamage(unsigned int const &attackDamage) {_attackDamage = attackDamage;}

std::string	ClapTrap::getName(void) const { return _name;}
unsigned	ClapTrap::getHitPoint(void) const { return _hitPoint;}
unsigned	ClapTrap::getEnergyPoint(void) const { return _energyPoint;}
unsigned	ClapTrap::getAttackDamage(void) const { return _attackDamage;}
