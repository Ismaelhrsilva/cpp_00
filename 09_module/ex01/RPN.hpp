/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:17:37 by ishenriq          #+#    #+#             */
/*   Updated: 2025/10/25 13:17:39 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP


# include <string>
# include <iostream>
# include <stack>
# include <sstream>
# include <stdexcept>
# include <cstdlib>
# include <cctype>

class Polish{
  private:

  public:
    Polish(void);
    ~Polish(void);
    Polish(const Polish &other);
    Polish &operator=(const Polish &other);

    int evaluate(const std::string &expression);

};


#endif // !DEBUG
