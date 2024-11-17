/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:15:37 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/17 19:33:46 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){

	ClapTrap ismael;
	//ClapTrap samuel("samuel");
	//ClapTrap a(ismael);
	//ClapTrap b = samuel;
	
	std::cout << std::string(20, '-') << std::endl;
	std::cout << "Setando os nomes" << std::endl;
	std::cout << std::string(20, '-') << std::endl;

	std::cout << ismael.getName() << std::endl;
	ismael.setName("ismael");
	std::cout << ismael.getName() << std::endl;

	std::cout << ismael.getHitPoint() << std::endl;
	ismael.setHitPoint(150);
	std::cout << ismael.getHitPoint() << std::endl;

	std::cout << ismael.getAttackDamage() << std::endl;
	ismael.setAttackDamage(40);
	std::cout << ismael.getAttackDamage() << std::endl;

	std::cout << ismael.getEnergyPoint() << std::endl;
	ismael.setEnergyPoint(100);
	std::cout << ismael.getEnergyPoint() << std::endl;

	/*ismael.attack("samuel");
	samuel.takeDamage(ismael.getAttackDamage());
	samuel.beRepaired(100);*/

	/*samuel.setName("sam");
	samuel.setHitPoint(150);
	samuel.setAttackDamage(40);
	samuel.setEnergyPoint(100);*/

	return 0;
}
