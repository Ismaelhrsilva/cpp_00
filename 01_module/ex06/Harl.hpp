/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:39:25 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/07 17:12:08 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef harl_hpp
# define harl_hpp

# include <string>
# include <iostream>

class Harl {
	public:
		Harl( void );
		~Harl( void );
		void complain( std::string level );
		int	getSignal( void );

	enum levels {
		DEBUG,
		INFO,
		WARNING,
		ERROR,
	};
	
	
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

		int	_signal;
		typedef void (Harl::*FuncsComplain)();
		FuncsComplain FuncComplain[4];
};

#endif
