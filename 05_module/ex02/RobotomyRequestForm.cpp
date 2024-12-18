/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 20:56:35 by ishenriq          #+#    #+#             */
/*   Updated: 2024/12/18 17:15:41 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void)
	: AForm("RobotomyRequestForm", GRADE_SIGN, GRADE_EXEC),
	  _target("")
{

	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: AForm("RobotomyRequestForm", GRADE_SIGN, GRADE_EXEC),
	  _target(target)
{

	std::cout << "RobotomyRequestForm name constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void){

	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: AForm("RobotomyRequestForm", GRADE_SIGN, GRADE_EXEC),
	  _target(other._target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;

	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other){

	std:: cout << "RobotomyRequestForm copy assignment operator called" << std::endl;

	if (this == &other)
		return *this;
	return *this;
}

void RobotomyRequestForm::executeTask(void) const{

	std::cout << "Robotomy started..." << std::endl;
	if ((rand() % 100) % 2 == 0)
		std::cout << "Robotization was finished" << std::endl;
	else
		std::cout << "Robotization has failed" << std::endl;
}
