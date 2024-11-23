/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:32:09 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 17:59:09 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define SIZE 4

int main()
{
	AAnimal* arrayAnimal[SIZE];
	
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

	//The code below wont'compile
	/*AAnimal* animal = new AAnimal();

	animal->getType();
	animal->makeSound();
	delete animal;*/

	return 0;
}
