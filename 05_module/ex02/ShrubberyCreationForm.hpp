/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 20:36:59 by ishenriq          #+#    #+#             */
/*   Updated: 2024/12/13 21:00:15 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <iostream>
# include <exception>

class AForm;

class ShrubberyCreationForm: public AForm {

	private:
		static const int GRADE_SIGN = 145;
		static const int GRADE_EXEC = 137;
		const std::string _target;

	protected:
		void executeTask(void) const;

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string target);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

};

#endif 
