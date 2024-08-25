/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:58:04 by ishenriq          #+#    #+#             */
/*   Updated: 2024/08/25 16:06:27 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void){
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*ptr = &brain;
	std::string &ref = brain;

	std::cout << &brain << std::endl;
	std::cout << ptr << std::endl;
	std::cout << &ref << std::endl;

	std::cout << brain << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;

	return (0);
}
