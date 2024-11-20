/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:15:37 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/20 16:25:02 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ft_constructor(ClapTrap &ismael){
	

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

	ClapTrap ismael;

	std::cout << "Name is " << ismael.getName() << std::endl;
	ismael.setName("ismael");
	std::cout << "Name is " << ismael.getName() << std::endl;
	std::cout << std::string(20, '-') << std::endl;

	ft_constructor(ismael);
	
	ClapTrap acsa("acsa");
	ft_constructor(acsa);

	ClapTrap a(ismael);
	ft_constructor(a);
	
	
	ClapTrap b;
	b = acsa;
	ft_constructor(b);

	return 0;
}
