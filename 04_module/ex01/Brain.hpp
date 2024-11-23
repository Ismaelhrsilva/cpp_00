/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:39:12 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/23 16:53:20 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain {

	private:
		std::string _ideas[100];

	public:
		Brain( void );
		~Brain( void );
		Brain( const Brain &other );
		Brain &operator=( const Brain &other );
};

#endif // !BRAIN_HPP
