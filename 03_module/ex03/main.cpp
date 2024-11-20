/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:15:37 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/20 18:39:35 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	ft_constructor(DiamondTrap &ismael){
	

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

	DiamondTrap ismael;

	std::cout << "Name is " << ismael.getName() << std::endl;
	ismael.setName("ismael");
	std::cout << "Name is " << ismael.getName() << std::endl;
	std::cout << std::string(20, '-') << std::endl;

	ft_constructor(ismael);
	
	DiamondTrap acsa("acsa");
	ft_constructor(acsa);

	DiamondTrap a(ismael);
	ft_constructor(a);
	
	DiamondTrap b;
	b = acsa;
	ft_constructor(b);

	ismael.highFivesGuys();
	acsa.highFivesGuys();
	a.highFivesGuys();
	b.highFivesGuys();

	ismael.whoAmI();
	acsa.whoAmI();
	a.whoAmI();
	b.whoAmI();

	return 0;
}
