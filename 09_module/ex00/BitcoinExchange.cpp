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


static std::string trim(const std::string &str){
  size_t start = str.find_first_not_of(" \t");
  size_t end = str.find_last_not_of(" \t");
  if (start == std::string::npos || end == std::string::npos)
    return "";
  return str.substr(start, end - start + 1);
}

static bool isValidDateFormat(const std::string &date){
  if (date.size() != 10)
    return false;

  for (int i = 0; i < 10; i++){
    if (i == 4 || i == 7){
      if (date[i] != '-')
        return false;

    } else {
      if (!std::isdigit(date[i]))
        return false;
    }
  }
  return true;
}


void Bitcoin::loadInput(const std::string &filename){

	std::ifstream file(filename.c_str());
	std::string line;
	std::getline(file, line);

	while(std::getline(file, line)){
		std::stringstream ss(line);
		std::string date, valueStr;

		std::getline(ss, date, '|');
		std::getline(ss, valueStr);

    date = trim(date);
    valueStr = trim(valueStr);

    if (!isValidDateFormat(date)){
      std::cout << "Error: bad input => " << date << std::endl;
      continue;
    }

    std::map<std::string, float>::const_iterator it = _dataBase.lower_bound(date);
    if (it != _dataBase.end() && it->first != date){
      if (it != _dataBase.begin()){
        --it;
      } else {
        std::cout << "Error: no valid earlier date for =>" << date << std::endl;
        continue;
      }
	  }
    if (it == _dataBase.end()){
      std::cout << "Error: no valid date found for =>" << date << std::endl;
      continue;
    }
    std::stringstream converter(valueStr);
		float value;
		converter >> value;

    if (value < 0){
       std::cout << "Error: not a positive number" << std::endl;
      continue;
    } else if (value > 1000){
      continue;
      std::cout << "Error: too larde number" << std::endl;
    }

    std::cout << date << " => " << value << " = " << value * it->second << std::endl;
}
}
