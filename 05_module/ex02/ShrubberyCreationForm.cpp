/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 20:56:35 by ishenriq          #+#    #+#             */
/*   Updated: 2024/12/14 19:27:20 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: AForm("ShrubberyCreationForm", GRADE_SIGN, GRADE_EXEC),
	  _target("")
{

	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	: AForm("ShrubberyCreationForm", GRADE_SIGN, GRADE_EXEC),
	  _target(target)
{

	std::cout << "ShrubberyCreationForm name constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){

	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: AForm("ShrubberyCreationForm", GRADE_SIGN, GRADE_EXEC),
	  _target(other._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;

	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){

	std:: cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;

	if (this  == &other)
		return *this;
	return *this;
}

void ShrubberyCreationForm::executeTask(void) const{

	static const std::string file = _target + "_shrubbery";

	std::ofstream fileOut(file.c_str());

	fileOut << "               ,@@@@@@@,\n"
		<< "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
		<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
		<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
		<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
		<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
		<< "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
		<< "       |o|        | |         | |\n"
		<< "       |.|        | |         | |\n"
		<< "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_"
		<< std::endl;

	fileOut.close();
}
