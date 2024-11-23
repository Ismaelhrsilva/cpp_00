/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:32:09 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 17:12:06 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define SIZE 4

int main()
{
	Animal* arrayAnimal[SIZE];
	
	for (size_t i = 0; i < SIZE ; i++){

		if (i < SIZE / 2)
			arrayAnimal[i] = new Dog();
		else
			arrayAnimal[i] = new Cat();
	}

	for (size_t i = 0; i < SIZE ; i++){

		std::cout << arrayAnimal[i]->getType() << " " << std::endl;
		arrayAnimal[i]->makeSound();
		delete arrayAnimal[i];
	}

	Cat	Ccopy;
	std::cout << Ccopy.getType() << " " << std::endl;
	Ccopy.makeSound();

	Cat	tmp = Ccopy;
	std::cout << tmp.getType() << " " << std::endl;
	tmp.makeSound();

	Dog Dcopy;
	std::cout << Dcopy.getType() << " " << std::endl;
	Dcopy.makeSound();

	Dog	temp = Dcopy;
	std::cout << temp.getType() << " " << std::endl;
	temp.makeSound();


	return 0;
}
