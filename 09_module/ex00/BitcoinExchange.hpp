/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:28:14 by ishenriq          #+#    #+#             */
/*   Updated: 2025/06/07 20:00:26 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <string>
# include <iostream>
# include <map>
# include <fstream>
# include <sstream>

class Bitcoin{

private:
	std::map<std::string, float> _dataBase;

public:
	Bitcoin(void);
	~Bitcoin(void);
	Bitcoin(const Bitcoin &other);
	Bitcoin &operator=(const Bitcoin &other);

	void loadDataBase(const std::string &filename);
	void loadInput(const std::string &filename);
	void printBase(void);

};

#endif
