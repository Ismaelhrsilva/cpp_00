/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:46:41 by ishenriq          #+#    #+#             */
/*   Updated: 2024/12/18 20:22:59 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main(void){

	Intern someRandomIntern;
	AForm *rrf;

	try {
		std::cout << "\n: Shrubbery" << std::endl;
		std::cout << std::string(20, '-') << std::endl;

		rrf = someRandomIntern.makeForm("shrubbery request", "filename");
		std::cout << *rrf << std::endl;
		delete rrf;
		std::cout << std::endl;

		std::cout << "\n: Robotomy" << std::endl;
		std::cout << std::string(20, '-') << std::endl;

		rrf = someRandomIntern.makeForm("robotomy request", "merc");
		std::cout << *rrf << std::endl;
		delete rrf;
		std::cout << std::endl;

		std::cout << "\n: Presidential" << std::endl;
		std::cout << std::string(20, '-') << std::endl;

		rrf = someRandomIntern.makeForm("presidential request", "CEO");
		std::cout << *rrf << std::endl;
		delete rrf;

		std::cout << "\n: error" << std::endl;
		std::cout << std::string(20, '-') << std::endl;

		rrf = someRandomIntern.makeForm("ismael request", "filename");
		std::cout << *rrf << std::endl;
		delete rrf;
		std::cout << std::endl;
		std::cout << std::endl;

	} catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	return  0;
}
