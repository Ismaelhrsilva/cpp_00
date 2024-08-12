#include "PhoneBook.hpp"


PhoneBook::PhoneBook(void){
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

void  PhoneBook::add_contact(void)
{
  Contact Contact;
  std::string input;
  
  for (int i = -1; i <= DARKEST_SECRET; i++){
    std::cout << _selectPhrase(static_cast<data_type>(i)) << std::endl;
    std::getline(std::cin, input);
    Contact.setData(input, static_cast<data_type>(i));
  }
  Contact.printContactInfo();
}

void  PhoneBook::_prompt(void){

  std::string input;

  std::cout << "Enter input :" << std::endl;
  std::getline(std::cin, input);
  while (input != "EXIT")
  {
      if (input == "ADD")
        add_contact();
      else if (input == "SEARCH")
        std::cout << "search" << std::endl;
      else if (input == "EXIT")
        std::cout << "exit" << std::endl;
      else
        std::cout << "Invalid input" << std::endl;
      std::cout << "Enter input :" << std::endl;
      std::getline(std::cin, input);
  }

}

/*void  PhoneBook::add_contact(void)
{
  Contact Contact;
  
  std::string input;

  std::cout << "Enter first name:" << std::endl;
  std::cin >> input;
  Contact.setData(input, FIRST_NAME);
  std::cout << "Enter last name:" << std::endl;
  std::cin >> input;
  Contact.setData(input, LAST_NAME);
  std::cout << "Enter nickname:" << std::endl;
  std::cin >> input;
  Contact.setData(input, NICKNAME);
  std::cout << "Enter phone number:" << std::endl;
  std::cin >> input;
  Contact.setData(input, PHONE_NUMBER);
  std::cout << "Enter darkest secret:" << std::endl;
  std::cin >> input;
  Contact.setData(input, DARKEST_SECRET);

  std::cout << std::endl;
  Contact.printContactInfo();
}*/
