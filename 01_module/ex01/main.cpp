/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:56:50 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/07 16:04:18 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	int N = 0;
	std::string  name = "Ismael";
	Zombie *horde = zombieHorde(N, name); 

	for (int i = 0; i < N; i++){
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
