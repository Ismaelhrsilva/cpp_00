/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:22:20 by ishenriq          #+#    #+#             */
/*   Updated: 2024/12/18 20:21:13 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP 
# define INTERN_HPP

# include <string>
# include <iostream>
# include <exception>

class AForm;

class Intern {

	public:
		Intern(void);
		~Intern(void);
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);

		AForm *makeForm(const std::string form_name, const std::string form_target);

		class InvalidFormException: public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

#endif // !FORM_HPP
