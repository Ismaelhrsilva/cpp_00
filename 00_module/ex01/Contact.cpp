#include "Contact.hpp"
#include <unistd.h>
#include <cctype>

Contact::Contact(void) {}
Contact::~Contact(void) {}

std::string	Contact::_phone_number_valid(std::string data){

  while (data.length() != 9){
	std::cout << "The phone number must have 9 digits. Try again" << std::endl;
  	std::getline(std::cin, data);
  	std::cin.clear();
  }
  for (size_t i = 0; i < data.length(); i++){
		if (!std::isdigit(static_cast<unsigned char>(data[i]))){
			std::cout << "Only number are allowed. Try again" << std::endl;
  			std::getline(std::cin, data);
  			std::cin.clear();
			return _phone_number_valid(data);
			break ;
		}
	}
  return (data);
}

void Contact::setData(std::string data, data_type type)
{
  while (data.empty()){
	std::cout << "No allowed empty fields. Try again" << std::endl;
  	std::getline(std::cin, data);
  	std::cin.clear();
  }
  switch (type) {
  case FIRST_NAME:
    this->_first_name = data;
	return ;
  case LAST_NAME:
    this->_last_name = data;
	return ;
  case NICKNAME:
    this->_nickname = data;
	return ;
  case PHONE_NUMBER:
    this->_phone_number = _phone_number_valid(data);
	return ;
  case DARKEST_SECRET:
    this->_darkest_secret = data;
	return ;
  default:
    std::cerr << "invalid type" << std::endl;
	return ;
  }
}

std::string Contact::getContactInfo( data_type type ) const{
  switch (type) {
  case FIRST_NAME:
    return _first_name;
  case LAST_NAME:
    return _last_name;
  case NICKNAME:
    return _nickname;
  case PHONE_NUMBER:
    return _phone_number;
  case DARKEST_SECRET:
    return _darkest_secret;
  default:
    return "";
  }
}

void	Contact::printContactInfo( void ) const
{
	std::cout << "First name:\t" << this->_first_name << std::endl;
	std::cout << "Last name:\t" << this->_last_name << "\n";
	std::cout << "Nickame:\t" << this->_nickname << "\n";
	std::cout << "Phone number:\t" << this->_phone_number << "\n";
	std::cout << "Darkest Secret:\t" << this->_darkest_secret << "\n";
	std::cout << std::endl;
}
