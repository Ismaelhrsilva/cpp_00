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
  this->_n_contact++;
}

void  PhoneBook::_formatSearch(std::string data) const {
  if (data.size() > 10)
    std::cout << std::setw(9) << data.substr(0, 9) << ".|";
  else
    std::cout << std::setw(10) << std::setfill(' ') << data << "|";
}

void  PhoneBook::_search(void) const{
  if (this->_n_contact == 0)
  {
    std::cout << "There are no contacts in the PhoneBook" << std::endl;
    return ;
  }
  _formatSearch("Index");
  _formatSearch("First Name");
  _formatSearch("Last Name");
  _formatSearch("Nickname");
  std::cout << std::endl;
  for (int i = 0; i < (this->_n_contact < 8 ? this->_n_contact: 8); i++)
  {
   // std::cout << "|";
    std::cout << std::setw(10) << std::setfill(' ') << i + 1 << "|";
    _formatSearch(_Contact[i].getContactInfo(FIRST_NAME));
    _formatSearch(_Contact[i].getContactInfo(LAST_NAME));
    _formatSearch(_Contact[i].getContactInfo(NICKNAME));
    std::cout << std::endl;
    //_Contact[i].printContactInfo();
  }
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
