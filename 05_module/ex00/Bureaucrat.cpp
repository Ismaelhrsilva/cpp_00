/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:30:12 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/27 20:30:15 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name(""), _grade(0) {

	std::cout << "Bureaucrat default constructor called" << std::endl;

	throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat(void){

	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name,  int grade)
	: _name(name), _grade(grade) {

	std::cout << "Bureaucrat name constructor called" << std::endl;

	if (grade > MIN)
		throw GradeTooLowException();
	if (grade < MAX)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat( const Bureaucrat &other)
	: _name(other._name), _grade(other._grade) {

	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other){
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this != &other){
		_grade = other._grade;
	}
	return *this;
}

std::string	Bureaucrat::getName(void) const{

	return _name;
}

int Bureaucrat::getGrade(void) const{

	return _grade;
}

void  Bureaucrat::incrementGrade(void){

	if(_grade == MAX)
		throw GradeTooHighException();

	_grade--;
}
void  Bureaucrat::decrementGrade(void){

	if (_grade == MIN)
		throw GradeTooLowException();

	_grade++;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &Br) {

	return os << Br.getName()
			  << ", Bureaucrat grade "
			  << Br.getGrade()
			  << "."
			  << std::endl;
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){

	return "Grade is too Low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){

	return "Grade is too High";
}
