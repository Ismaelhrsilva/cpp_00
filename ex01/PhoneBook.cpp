#include "PhoneBook.hpp"
#include <limits>


PhoneBook::PhoneBook(void){
  this->_n_contact = 0;
  this->_prompt();}

PhoneBook::~PhoneBook(void){}

std::string  PhoneBook::_selectPhrase(data_type type){
  switch (type) {
  case FIRST_NAME:
    return "Enter first name:";
  case LAST_NAME:
    return "Enter last name:";
  case NICKNAME:
    return "Enter nickname:";
  case PHONE_NUMBER:
    return "Enter phone number:";
  case DARKEST_SECRET:
    return "Enter darkest secret:";
  case NONE:
    return "";
  }
  return "";
}

void  PhoneBook::_add_info(int n_contact, data_type type)
{
  std::string buffer;

  std::cout << _selectPhrase(type) << std::endl;
  std::getline(std::cin, buffer);
  PhoneBook::_Contact[n_contact].setData(buffer, type);
}

void  PhoneBook::_add_contact(void)
{
  this->_add_info(this->_n_contact % 8, FIRST_NAME);
  this->_add_info(this->_n_contact % 8, LAST_NAME);
  this->_add_info(this->_n_contact % 8, NICKNAME);
  this->_add_info(this->_n_contact % 8, PHONE_NUMBER);
  this->_add_info(this->_n_contact % 8, DARKEST_SECRET);
  this->_n_contact = (this->_n_contact + 1) % 8; 
  //this->_n_contact++;
}

void  PhoneBook::_search(void) const{
  for (int i = 0; i < this->_n_contact; i++)
    _Contact[i].printContactInfo();
}

void  PhoneBook::_prompt(void){

  std::string buffer;
  bool exit = false;

  std::cout << "Welcome to MyAwesomePhoneBook" << std::endl;
  while (!exit){
    std::cout << "Enter your command" << std::endl;
    std::cout << "1. ADD" << std::endl;
    std::cout << "2. SEARCH" << std::endl;
    std::cout << "3. EXIT" << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cin >> buffer;
    if (buffer == "ADD")
      _add_contact(); 
    else if (buffer == "SEARCH")
      _search();
    else if (buffer == "EXIT")
      exit = true;
    else
      std::cout << "Invalid command" << std::endl;
  }
}
