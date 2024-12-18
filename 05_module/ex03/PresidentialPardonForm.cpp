/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 20:56:35 by ishenriq          #+#    #+#             */
/*   Updated: 2024/12/18 17:15:38 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
	: AForm("PresidentialPardonForm", GRADE_SIGN, GRADE_EXEC),
	  _target("")
{

	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: AForm("PresidentialPardonForm", GRADE_SIGN, GRADE_EXEC),
	  _target(target)
{

	std::cout << "PresidentialPardonForm name constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void){

	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
	: AForm("PresidentialPardonForm", GRADE_SIGN, GRADE_EXEC),
	  _target(other._target)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;

	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other){

	std:: cout << "PresidentialPardonForm copy assignment operator called" << std::endl;

	if (this == &other)
		return *this;
	return *this;
}

void PresidentialPardonForm::executeTask(void) const{

	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
