/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:22:06 by ishenriq          #+#    #+#             */
/*   Updated: 2024/08/25 16:56:04 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){

	Weapon sword = Weapon("sword");
	
	HumanA one("Ismael", sword);
	
	one.attack();
	
	sword.setType("sword with fire");
	
	one.attack();
	
	Weapon gun = Weapon("gun");
	
	HumanB two("Acsa");
	
	two.attack();

	two.setWeapon(gun);
	
	two.attack();
	
	gun.setType("gun upgraded");
	
	two.attack();

	return 0;
}
