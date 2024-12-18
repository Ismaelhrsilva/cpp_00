/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:22:20 by ishenriq          #+#    #+#             */
/*   Updated: 2024/12/18 17:02:53 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat;

class AForm {

	private:
		static const int MAX = 1;
		static const int MIN = 150;
		const std::string _name;
		bool _signed;
		const int	_gradeToSign;
		const int	_gradeToExecute;

	protected:
		virtual void executeTask(void) const = 0;

	public:
		AForm(void);
		AForm(const std::string name, const int gradeToSign, const int gradeToExecute);
		virtual ~AForm(void);
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);

		std::string	getName(void) const;
		int	getSigned(void) const;
		int	getGradeToSign(void) const;
		int	getToExecute(void) const;

		void beSigned(Bureaucrat &Br);

		void execute(Bureaucrat const &executor) const;

		class GradeTooHighException: public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class FormNotSignedException: public std::exception {
			public:
				virtual const char *what() const throw();
		};

};

std::ostream &operator<<(std::ostream& os, const AForm &Fr);

#endif // !FORM_HPP
