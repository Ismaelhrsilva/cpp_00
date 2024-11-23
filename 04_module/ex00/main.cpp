/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:32:09 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 16:26:56 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	j->makeSound();
	i->makeSound(); 
	meta->makeSound();

	const WrongAnimal* z = new WrongCat();
	const WrongAnimal* t = new WrongAnimal();
	const WrongCat*	   c = new WrongCat();

		
	std::cout << z->getType() << " " << std::endl;
	std::cout << t->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;

	z->makeSound();
	t->makeSound();
	c->makeSound();

	delete meta;
	delete j;
	delete i;
	delete z;
	delete t;
	delete c;

	return 0;
}
