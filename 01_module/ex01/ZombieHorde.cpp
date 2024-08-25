/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:52:49 by ishenriq          #+#    #+#             */
/*   Updated: 2024/08/24 23:09:12 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie	*zombieHorde( int N, std::string name ){
	Zombie	*zombiehorde = new Zombie[N];
	if (N <= 0)
		std::cout << "Please, select a number above 0" << std::endl;
	for (int i = 0; i < N; i++){
		zombiehorde[i].setName(name);}
	return zombiehorde;
}
