/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:19:21 by ishenriq          #+#    #+#             */
/*   Updated: 2025/06/07 20:01:32 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv){

	if (argc != 2){
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	Bitcoin btc;

	btc.loadDataBase(argv[1]);
	btc.printBase();


	return (0);
}
