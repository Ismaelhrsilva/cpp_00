/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:46:41 by ishenriq          #+#    #+#             */
/*   Updated: 2024/12/04 18:29:32 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <cstdlib>

void	ft_clear_terminal(void){

	std::string buffer;

  	while (1){
  		std::getline(std::cin, buffer);
  		std::cin.clear();
		if (buffer == "n"){
			system("clear");
			break;
		}
		if (buffer == "m"){
			break;
		}
	}
}

int main(void){

	//---------------------------------------------------------

	system("clear");
	std::cout << "\nDEFAULT CONSTRUCTOR CALLED ERROR:" << std::endl;
	std::cout << std::string(20, '-') << std::endl;
	try {
		Form ismael;
	} catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}
	std::cout << std::string(20, '-') << std::endl;
	std::cout << "\n\n";
	ft_clear_terminal();
	
	
	//---------------------------------------------------------

	std::cout << "\nHIGHER THAN HIGH GRADE ERROR:" << std::endl;
	std::cout << std::string(20, '-') << std::endl;
	try {
		Form ismael("Ismael", -1, 1);
	} catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}
	std::cout << std::string(20, '-') << std::endl;
	std::cout << "\n\n";
	ft_clear_terminal();

	std::cout << "\nHIGHER THAN HIGH GRADE ERROR:" << std::endl;
	std::cout << std::string(20, '-') << std::endl;
	try {
		Form ismael("Ismael", 1, -1);
	} catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}
	std::cout << std::string(20, '-') << std::endl;
	std::cout << "\n\n";
	ft_clear_terminal();

	//---------------------------------------------------------

	std::cout << "\nSMALLER THAN HIGH GRADE ERROR:" << std::endl;
	std::cout << std::string(20, '-') << std::endl;
	try {
		Form ismael("Ismael", 151, 1);
	} catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}
	std::cout << std::string(20, '-') << std::endl;
	std::cout << "\n\n";
	ft_clear_terminal();

	std::cout << "\nSMALLER THAN HIGH GRADE ERROR:" << std::endl;
	std::cout << std::string(20, '-') << std::endl;
	try {
		Form ismael("Ismael", 1, 151);
	} catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}
	std::cout << std::string(20, '-') << std::endl;
	std::cout << "\n\n";
	ft_clear_terminal();
	//
	//---------------------------------------------------------
	
	std::cout << "\nxxxxxxxx:" << std::endl;
	std::cout << std::string(20, '-') << std::endl;
	try {
		Bureaucrat ismael("Ismael_high", 2);
		Form buyHouse("HouseInParkA", 1, 1);

		std::cout << ismael << std::endl;
		std::cout << buyHouse << std::endl;

		buyHouse.beSigned(ismael);

		ismael.incrementGrade();
		std::cout << ismael << std::endl;

		ismael.signForm(buyHouse);

	 } catch (std::exception &exception) {
		 std::cerr << exception.what() << std::endl;
	 }
	std::cout << std::string(20, '-') << std::endl;
	std::cout << "\n\n";
	ft_clear_terminal();
	
	//---------------------------------------------------------
	

	std::cout << "\nLOW GRADE ERROR:" << std::endl;
	std::cout << std::string(20, '-') << std::endl;
	try {
		Bureaucrat ismael("Bureaucrat", 145);
		while (ismael.getGrade() > 0)
		{
			std::cout << ismael << std::endl;
			ismael.decrementGrade();
		}
	}
	catch (std::exception &exception) {
		std::cerr << exception.what() << std::endl;
	}
	std::cout << std::string(20, '-') << std::endl;
	std::cout << "\n\n";
	ft_clear_terminal();

	return  0;
}
