/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:52:27 by ishenriq          #+#    #+#             */
/*   Updated: 2024/12/14 19:32:50 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void)
	: _name(""),
	_gradeToSign(0),
	_gradeToExecute(0)
{

	std::cout << "AForm default constructor called" << std::endl;

	_signed = false;

	throw GradeTooHighException();
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute)
	: _name(name),
	_gradeToSign(gradeToSign),
	_gradeToExecute(gradeToExecute)
{
	std::cout << "AForm name constructor called" << std::endl;

	if (gradeToSign > MIN || gradeToExecute > MIN)
		throw GradeTooLowException();
	if (gradeToSign < MAX || gradeToExecute < MAX)
		throw GradeTooHighException();

	_signed = false;
}

AForm::~AForm(void){

	std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(const AForm &other)
	: _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	std::cout << "AForm copy constructor called" << std::endl;

	*this = other;
}
AForm &AForm::operator=(const AForm &other){

	std:: cout << "AForm copy assignment operator called" << std::endl;

	if (this != &other){
		_signed = other._signed;
	}
	return *this;
}

std::string	AForm::getName(void) const { return _name; }
int	AForm::getSigned(void) const { return _signed; }
int	AForm::getGradeToSign(void) const { return _gradeToSign; }
int	AForm::getToExecute(void) const { return _gradeToExecute; }

void AForm::beSigned(Bureaucrat &Br){

	if(Br.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	_signed = true;
}

void AForm::execute(Bureaucrat const &executor) const {

	if (not this->getSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->_gradeToExecute)
		throw GradeTooLowException();

	this->executeTask();
}

const char *AForm::GradeTooHighException::what() const throw() {
	return "AForm: grade is to high";
}

const char *AForm::GradeTooLowException::what() const throw() {
	return "AForm: grade is to low";
}

const char *AForm::FormNotSignedException::what() const throw() {
	return "AForm: Is not signed";
}

std::ostream &operator<<(std::ostream& os, const AForm &Fr){

	return os
				<< "AForm:\t " << Fr.getName()
				<< "\n\t Grade to sign: " << Fr.getGradeToSign()
				<< "\n\t Grate to execute: " << Fr.getToExecute()
				<< "\n\t Status: " << (Fr.getSigned() ? "Signed" : "Unsigned");
}
