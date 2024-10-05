/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:45:22 by ishenriq          #+#    #+#             */
/*   Updated: 2024/10/05 14:02:25 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed {

	public:
		Fixed(void);
		~Fixed(void);

		Fixed(Fixed const &parameter);
		Fixed(int const number);
		Fixed(float const number);
		Fixed &operator=(const Fixed &parameter);

		float toFloat(void) const;
		int	toInt(void) const;

		void	setRawBits(int const raw);
		int		getRawBits(void) const;

	private:
		int _value;
		static const int	_bits = 8;
};

std::ostream &operator<<(std::ostream &oS, Fixed const &parameter);

#endif
