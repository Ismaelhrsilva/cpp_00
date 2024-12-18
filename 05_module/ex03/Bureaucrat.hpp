/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:46:35 by ishenriq          #+#    #+#             */
/*   Updated: 2024/12/13 20:29:59 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

class AForm;

class Bureaucrat {

  private:
	static const  int MAX = 1;
	static const  int MIN = 150;
	const std::string _name;
	int  _grade;

  public:
	Bureaucrat(void);
	~Bureaucrat(void);
	Bureaucrat(const std::string name,  int grade);
	Bureaucrat( const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);

	std::string	getName(void) const;
	int getGrade(void) const;

	void  incrementGrade(void);
	void  decrementGrade(void);

	void signForm(AForm &Fr);

	void executeForm(const AForm &form);

	class GradeTooHighException: public std::exception {
	  public:
		virtual const char *what() const throw();
	};
	
	class GradeTooLowException: public std::exception {
	  public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &Br);

#endif
