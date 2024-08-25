/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:21:08 by ishenriq          #+#    #+#             */
/*   Updated: 2024/08/24 22:37:32 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int	main(void){

	Zombie foo("Foo");
	foo.announce();

	Zombie *dead = newZombie("heap");
	dead->announce();
	delete dead;

	randomChump("Stack");

	return (0);
}
