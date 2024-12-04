/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:22:20 by ishenriq          #+#    #+#             */
/*   Updated: 2024/12/04 18:14:25 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP


# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		static const int MAX = 1;
		static const int MIN = 150;
		const std::string _name;
		bool _signed;
		const int	_gradeToSign;
		const int	_gradeToExecute;

	public:
		Form(void);
		Form(const std::string name, const int gradeToSign, const int gradeToExecute);
		~Form(void);
		Form(const Form &other);
		Form &operator=(const Form &other);

		std::string	getName(void) const;
		int	getSigned(void) const;
		int	getGradeToSign(void) const;
		int	getToExecute(void) const;

		void beSigned(Bureaucrat &Br);

		class GradeTooHighException: public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what() const throw();
		};

};

std::ostream &operator<<(std::ostream& os, const Form &Fr);

#endif // !FORM_HPP
