/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:00:41 by ishenriq          #+#    #+#             */
/*   Updated: 2025/04/11 19:24:29 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

int main(int argc, char argv){

	if (argc != 2){
		std::cerr << "Usage: ./Convert <literal>" << std::endl;
		return (1);
	}

	ScalarConvert::Convert(argv[1]);

	return(0);
};
