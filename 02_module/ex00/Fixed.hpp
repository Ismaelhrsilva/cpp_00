/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:29:24 by ishenriq          #+#    #+#             */
/*   Updated: 2024/08/26 19:02:20 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:
		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed &other);
		Fixed &operator=( const Fixed &other );

		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int	_value;
		static const int	_bits = 8;
};


#endif // !FIXED_HPP
