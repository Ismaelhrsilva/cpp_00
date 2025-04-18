/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:00:41 by ishenriq          #+#    #+#             */
/*   Updated: 2025/04/11 19:41:22 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv){

	if (argc != 2){
		std::cerr << "Usage: ./Convert <literal>" << std::endl;
		return (1);
	}

	ScalarConverter::convert(argv[1]);

	return(0);
};
