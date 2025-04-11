/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarType.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:00:34 by ishenriq          #+#    #+#             */
/*   Updated: 2025/04/11 19:06:10 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
# define SCALARCONVERT_HPP

# include <string>

class ScalarConvert{

private:
	ScalarConvert(void);

public:
	~ScalarConvert(void);
	ScalarConvert(const ScalarConvert &other);
	ScalarConvert &operator=(const ScalarConvert &other);

	static void Convert(std::string input);

};

#endif
