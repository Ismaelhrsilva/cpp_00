/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:45:22 by ishenriq          #+#    #+#             */
/*   Updated: 2024/10/05 15:17:24 by ishenriq         ###   ########.fr       */
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
		Fixed(int const &number);
		Fixed(float const &number);

		Fixed(Fixed const &parameter);
		Fixed &operator=(const Fixed &parameter);

		float toFloat(void) const;
		int	toInt(void) const;

		void	setRawBits(int const raw);
		int		getRawBits(void) const;

		bool	operator>(Fixed const &parameter) const;
		bool	operator<(Fixed const &parameter) const;
		bool	operator>=(Fixed const &parameter) const;
		bool	operator<=(Fixed const &parameter) const;
		bool	operator==(Fixed const &parameter) const;
		bool	operator!=(Fixed const &parameter) const;

		Fixed	operator+(Fixed const &parameter);
		Fixed	operator-(Fixed const &parameter);
		Fixed	operator*(Fixed const &parameter);
		Fixed	operator/(Fixed const &parameter);

		Fixed	operator++(void);
		Fixed	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		static	Fixed &min(Fixed &a, Fixed &b);
		static	Fixed &max(Fixed &a, Fixed &b);

		static const	Fixed &min(Fixed const &a, const Fixed &b);
		static const	Fixed &max(Fixed const &a, const Fixed &b);

	private:
		int _value;
		static const int	_bits = 8;
};

std::ostream &operator<<(std::ostream &oS, Fixed const &parameter);

#endif
