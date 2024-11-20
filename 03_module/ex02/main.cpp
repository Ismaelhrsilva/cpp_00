/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:15:37 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/20 17:15:27 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

void	ft_constructor(ScavTrap &ismael){
	

	std::cout << "Hitpoint is " << ismael.getHitPoint() << std::endl;
	ismael.setHitPoint(5);
	std::cout << "Hitpoint is " << ismael.getHitPoint() << std::endl;
	std::cout << std::string(20, '-') << std::endl;

	std::cout << "AtackDamage is " << ismael.getAttackDamage() << std::endl;
	ismael.setAttackDamage(6);
	std::cout << "AtackDamage is " << ismael.getAttackDamage() << std::endl;
	std::cout << std::string(20, '-') << std::endl;

	std::cout << "Energy Points is " << ismael.getEnergyPoint() << std::endl;
	ismael.setEnergyPoint(2);
	std::cout << "Energy Points is " << ismael.getEnergyPoint() << std::endl;
	std::cout << std::string(20, '-') << std::endl;

	ismael.attack("Samuel");
	std::cout << "Energy Points is " << ismael.getEnergyPoint() << std::endl;
	std::cout << std::string(20, '-') << std::endl;

	std::cout << "Hitpoint is " << ismael.getHitPoint() << std::endl;
	ismael.takeDamage(4);
	std::cout << "Hitpoint is " << ismael.getHitPoint() << std::endl;
	std::cout << "Energy Points is " << ismael.getEnergyPoint() << std::endl;
	std::cout << std::string(20, '-') << std::endl;
	
	std::cout << "Hitpoint is " << ismael.getHitPoint() << std::endl;
	std::cout << "Energy Points is " << ismael.getEnergyPoint() << std::endl;
	ismael.beRepaired(4);
	std::cout << "Hitpoint is " << ismael.getHitPoint() << std::endl;
	std::cout << "Energy Points is " << ismael.getEnergyPoint() << std::endl;
	std::cout << std::string(20, '-') << std::endl;

	ismael.attack("Samuel");
	std::cout << std::string(20, '-') << std::endl;
}


int main(void){

	ScavTrap ismael;

	std::cout << "Name is " << ismael.getName() << std::endl;
	ismael.setName("ismael");
	std::cout << "Name is " << ismael.getName() << std::endl;
	std::cout << std::string(20, '-') << std::endl;

	ft_constructor(ismael);
	
	ScavTrap acsa("acsa");
	ft_constructor(acsa);

	ScavTrap a(ismael);
	ft_constructor(a);
	
	ScavTrap b;
	b = acsa;
	ft_constructor(b);

	ismael.guardGate();
	acsa.guardGate();
	a.guardGate();
	b.guardGate();

	return 0;
}
