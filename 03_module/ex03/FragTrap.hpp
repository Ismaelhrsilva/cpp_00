/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:29:22 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/20 18:15:17 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {

	public:
		FragTrap(void);
		FragTrap(FragTrap const &other);
		FragTrap(std::string const &name);
		~FragTrap(void);

		FragTrap &operator=(FragTrap const &other);

		void	highFivesGuys(void);
};

#endif

