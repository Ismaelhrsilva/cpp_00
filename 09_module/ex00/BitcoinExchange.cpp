/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:39:44 by ishenriq          #+#    #+#             */
/*   Updated: 2025/06/07 20:00:46 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


Bitcoin::Bitcoin(void){
  loadDataBase("./data.csv");
}

Bitcoin::~Bitcoin(void){}

Bitcoin::Bitcoin(const Bitcoin &other){
	*this = other;
}

Bitcoin &Bitcoin::operator=(const Bitcoin &other){
	if (this != &other){
    this->_dataBase = other._dataBase;
    this->_input = other._input;
  }
	return *this;
}

void Bitcoin::loadDataBase(const std::string &filename){

	std::ifstream file(filename.c_str());
	std::string line;
	std::getline(file, line);

	while(std::getline(file, line)){
		std::stringstream ss(line);
		std::string date, valueStr;

		std::getline(ss, date, ',');
		std::getline(ss, valueStr);

		std::stringstream converter(valueStr);
		float value;
		converter >> value;

		_dataBase[date] = value;
	}
}

void Bitcoin::loadInput(const std::string &filename){

	std::ifstream file(filename.c_str());
	std::string line;
	std::getline(file, line);

	while(std::getline(file, line)){
		std::stringstream ss(line);
		std::string date, valueStr;

		std::getline(ss, date, ',');
		std::getline(ss, valueStr);

		std::stringstream converter(valueStr);
		float value;
		converter >> value;

		_input[date] = value;
	}
}

void Bitcoin::printBase(void){
	for (std::map<std::string, float>::const_iterator it = _input.begin(); it != _input.end(); ++it){
  std::cout << it->first << "=> " << it->second << std::endl;
	}
}
