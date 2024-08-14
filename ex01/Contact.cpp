#include "Contact.hpp"


Contact::Contact(void) {}
Contact::~Contact(void) {}

bool  Contact::setData(std::string data, data_type type)
{
  switch (type) {
  case FIRST_NAME:
    this->_first_name = data;
    return true;
  case LAST_NAME:
    this->_last_name = data;
    return true;
  case NICKNAME:
    this->_nickname= data;
    return true;
  case PHONE_NUMBER:
    this->_phone_number= data;
    return true;
  case DARKEST_SECRET:
    this->_darkest_secret = data;
    return true;
  default:
    std::cerr << "invalid type" << std::endl;
    return false;
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
