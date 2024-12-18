/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:46:41 by ishenriq          #+#    #+#             */
/*   Updated: 2024/12/18 17:18:16 by ishenriq         ###   ########.fr       */
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

		std::cout << *form << std::endl;

	} catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	delete form;

	//---------------------------------------------------------

	std::cout << "\nCreating Form: Robotomy:" << std::endl;
	std::cout << std::string(20, '-') << std::endl;

	form = new RobotomyRequestForm("form_robotomy");
	std::cout << *form << std::endl;
	std::cout << std::endl;

	try {
		boss->signForm(*form);
		boss->executeForm(*form);
		std::cout << std::endl;
		analist->signForm(*form);
		analist->executeForm(*form);
		std::cout << *form << std::endl;
	} catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	delete form;

	//---------------------------------------------------------

	std::cout << "\nCreating Form: presidential:" << std::endl;
	std::cout << std::string(20, '-') << std::endl;

	form = new PresidentialPardonForm("form_president");
	std::cout << *form << std::endl;
	std::cout << std::endl;

	try {
		boss->signForm(*form);
		boss->executeForm(*form);
		std::cout << std::endl;
		analist->signForm(*form);
		analist->executeForm(*form);
		std::cout << *form << std::endl;
	} catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	delete form;
	delete boss;
	delete analist;

	return  0;
}
