/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:00:00 by ishenriq          #+#    #+#             */
/*   Updated: 2025/07/19 18:00:02 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>

template<typename T>
typename T::iterator easyfind(T &container, int value){
  typename T::iterator it = std::find(container.begin(), container.end(), value);
  if (it == container.end())
	throw std::runtime_error("value not found");
  return it;
}

#endif
