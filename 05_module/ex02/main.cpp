/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:46:41 by ishenriq          #+#    #+#             */
/*   Updated: 2024/12/14 19:48:05 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main(void){

	std::cout << "\nCreating Bureaucrat:" << std::endl;
	std::cout << std::string(20, '-') << std::endl;


	Bureaucrat *boss = new Bureaucrat("Boss", 1);
	Bureaucrat *analist = new Bureaucrat("Analist", 150);

	std::cout << *boss;
	std::cout << *analist;

	std::cout << "\nCreating Form: Shrubbery:" << std::endl;
	std::cout << std::string(20, '-') << std::endl;

	AForm *form = new ShrubberyCreationForm("filename");
	std::cout << *form << std::endl;
	std::cout << std::endl;

	try {
		boss->signForm(*form);
		boss->executeForm(*form);
		std::cout << std::endl;
		analist->signForm(*form);
		analist->executeForm(*form);
	} catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	//---------------------------------------------------------

	return  0;
}
