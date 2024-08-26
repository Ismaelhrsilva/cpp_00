/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:06:06 by ishenriq          #+#    #+#             */
/*   Updated: 2024/08/26 17:06:38 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv){
	
	if (argc != 2){
		std::cout << "Only one parameter is allowed" << std::endl;
		return (1);}

	Harl harl;
	harl.complain(argv[1]);
	if (!harl.getSignal())
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (0);
}
