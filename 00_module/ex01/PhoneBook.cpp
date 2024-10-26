#include "PhoneBook.hpp"
#include <limits>
#include <cstdlib>
#include <sstream>
#include <unistd.h>
#include <cstdio>

PhoneBook::PhoneBook(void){
  this->_n_contact = 0;
  this->_prompt();}

PhoneBook::~PhoneBook(void){}

std::string  PhoneBook::_selectPhrase(data_type type){
  switch (type) {
  case FIRST_NAME:		return "Enter first name:";
  case LAST_NAME:		return "Enter last name:";
  case NICKNAME:		return "Enter nickname:";
  case PHONE_NUMBER:	return "Enter phone number:";
  case DARKEST_SECRET:	return "Enter darkest secret:";
  case NONE:			return "";
  }
  return "";
}

void  PhoneBook::_add_info(int n_contact, data_type type)
{
  std::string buffer;

  std::cout << _selectPhrase(type) << std::endl;
  std::getline(std::cin, buffer);
  std::cin.clear();
  PhoneBook::_Contact[n_contact].setData(buffer, type);
  system("clear");
}

void  PhoneBook::_add_contact(void)
{
  system("clear");
  this->_add_info(this->_n_contact % 8, FIRST_NAME);
  this->_add_info(this->_n_contact % 8, LAST_NAME);
  this->_add_info(this->_n_contact % 8, NICKNAME);
  this->_add_info(this->_n_contact % 8, PHONE_NUMBER);
  this->_add_info(this->_n_contact % 8, DARKEST_SECRET);
  this->_n_contact++;
  system("clear");
  std::cout << "Your contact has been successfully added!" << std::endl;
  sleep(1);
  system("clear");
}

void  PhoneBook::_formatSearch(std::string data) const {
  if (data.size() > 10)
    std::cout << std::setw(9) << data.substr(0, 9) << ".|";
  else
    std::cout << std::setw(10) << std::setfill(' ') << data << "|";
}

void  PhoneBook::_displayPhoneBook(void) const{
  _formatSearch("Index");
  _formatSearch("First Name");
  _formatSearch("Last Name");
  _formatSearch("Nickname");
  std::cout << std::endl;

  for (int i = 0; i < (this->_n_contact < 8 ? this->_n_contact: 8); i++) {
    std::cout << std::setw(10) << std::setfill(' ') << i + 1 << "|";
    _formatSearch(_Contact[i].getContactInfo(FIRST_NAME));
    _formatSearch(_Contact[i].getContactInfo(LAST_NAME));
    _formatSearch(_Contact[i].getContactInfo(NICKNAME));
    std::cout << std::endl;
  }
}

void  PhoneBook::_search(void) const{
  system("clear");
  std::string buffer;
  if (this->_n_contact == 0) {
    std::cout << "There are no contacts in the PhoneBook" << std::endl;
	sleep(1);
  	system("clear");
    return ;
  }
  this->_displayPhoneBook();

  int index = 0;
  bool valid = false;
  std::cout << "Search a specific contact (1 to 8):" << std::endl;
  while (true){
		std::clearerr(stdin);
		std::cin.clear();
		std::getline(std::cin, buffer);
		if (std::cin.eof()){
			exit(1) ;}
		if (buffer.empty()){
			std::cout << "Empty input, try again" << std::endl;
			sleep(1);
  			system("clear");
  			this->_displayPhoneBook();
  			std::cout << "Search a specific contact (1 to 8):" << std::endl;
			continue ;}
		std::stringstream ss(buffer);
		if (ss >> index && (index >= 1 && index <= 8)){
			index--;
			if (index < this->_n_contact){
				valid = true;
				break ;
			}
			else {
				std::cout << "Invalid index" << std::endl;
				sleep(1);
  				system("clear");
  				this->_displayPhoneBook();
  				std::cout << "Search a specific contact (1 to 8):" << std::endl;
			}
		}
		else {
			std::cout << "Invalid index" << std::endl;
			sleep(1);
  			system("clear");
			this->_displayPhoneBook();
			std::cout << "Search a specific contact (1 to 8):" << std::endl;
		}
  }
  if (valid){
	std::cout << _Contact[index].getContactInfo(FIRST_NAME) << std::endl;
  	std::cout << _Contact[index].getContactInfo(LAST_NAME) << std::endl;
  	std::cout << _Contact[index].getContactInfo(NICKNAME) << std::endl;
  	std::cout << _Contact[index].getContactInfo(PHONE_NUMBER) << std::endl;
  	std::cout << _Contact[index].getContactInfo(DARKEST_SECRET) << std::endl;
  }
  sleep(2);
  system("clear");
}

void  PhoneBook::_prompt(void){

  std::string buffer;
  bool exit = false;

  system("clear");
  std::cout << "Welcome to MyAwesomePhoneBook" << std::endl;
  while (!exit){
	std::clearerr(stdin);
	std::cin.clear();
    std::cout << "Enter your command" << std::endl;
    std::cout << "1. ADD" << std::endl;
    std::cout << "2. SEARCH" << std::endl;
    std::cout << "3. EXIT" << std::endl;
    std::cout << "--------------------------" << std::endl;
  	std::getline(std::cin, buffer);
	if (std::cin.eof()){
		break ;}
	if (buffer.empty()){
		std::cout << "Empty input, try again" << std::endl;
		sleep(1);
  		system("clear");
		continue ;}
    if (buffer == "ADD")
      _add_contact(); 
    else if (buffer == "SEARCH")
      _search();
    else if (buffer == "EXIT")
      exit = true;
    else if (buffer != "ADD" && buffer != "SEARCH" && buffer != "EXIT"){
      	std::cout << "Invalid command, try again" << std::endl;
		sleep(1);
  		system("clear");}
	else
		break ;
  }
}
