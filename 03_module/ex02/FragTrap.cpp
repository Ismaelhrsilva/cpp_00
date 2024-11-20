/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:37:02 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/20 17:45:59 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
 * Constructors
*/

FragTrap::FragTrap(void): ClapTrap() {
	std::cout << "FragTrap Constructor" << std::endl;
	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
};

FragTrap::FragTrap(std::string const &name): ClapTrap(name) {
	std::cout << "FragTrap name constructor" << std::endl;
	setName(name);
	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
};

FragTrap::FragTrap(FragTrap const &other): ClapTrap(other) {
	std::cout << "FragTrap copy constructor" << std::endl;
	*this = other;
};

FragTrap &FragTrap::operator=(FragTrap const &other){
	std::cout << "FragTrap assignment constructor" << std::endl;
	if (this != &other){
		setName(other.getName());
		setHitPoint(other.getHitPoint());
		setEnergyPoint(other.getEnergyPoint());
		setAttackDamage(other.getAttackDamage());
	}
	return *this;
};

FragTrap::~FragTrap(void){
	std::cout << "FragTrap destructor" << std::endl;
};

void	FragTrap::highFivesGuys(void){
	std::cout << "High five request has been accepted succefully!" << std::endl;
};
