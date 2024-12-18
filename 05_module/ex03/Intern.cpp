/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:22:20 by ishenriq          #+#    #+#             */
/*   Updated: 2024/12/18 20:15:15 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

Intern::Intern(void){

	std::cout << "Intern default constructor called" << std::endl;
}
Intern::~Intern(void){

	std::cout << "Intern destructor called" << std::endl;
}
Intern::Intern(const Intern &other){
	
	std::cout << "Intern copy constructor called" << std::endl;
	*this = other;
}
Intern &Intern::operator=(const Intern &other){

	std::cout << "Intern copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	return *this;
}

static AForm *shrubberyRequestForm(const std::string &target){
	return new ShrubberyCreationForm(target);
}

static AForm *robotomyRequestForm(const std::string &target){
	return new RobotomyRequestForm(target);
}

static AForm *presidentialRequestForm(const std::string &target){
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(const std::string form_name, const std::string form_target){

	static const std::string list_form[] = {
		"robotomy request",
		"shrubbery request",
		"presidential request"
	};

	static AForm *(*method[]) (const std::string &target) = {
		&shrubberyRequestForm,
		&robotomyRequestForm,
		&presidentialRequestForm
	};

	for (size_t i = 0; i < list_form->length(); i++){
		if (form_name.compare(list_form[i]) != 0)
			continue;

		AForm *form = method[i](form_target);
		std::cout << "Intern creates " << form->getName() << std::endl;
		return form;
	}

	throw InvalidFormException();
}

const char *Intern::InvalidFormException::what() const throw() {
	return "Intern: form invalid";
}
