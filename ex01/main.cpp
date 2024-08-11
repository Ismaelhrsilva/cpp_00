#include <iostream>
#include "Contact.hpp"

void  ft_add(void)
{
  Contact::Contact newContact;

  std::cout << "Enter first name:" << std::endl;
  std::cin >> newContact::first_name;
  std::cout << "Enter last name:" << std::endl;
  std::cin >> newContact::last_name;
  std::cout << "Enter nickname:" << std::endl;
  std::cin >> newContact::nickname;
  std::cout << "Enter phonebook:" << std::endl;
  std::cin >> newContact::phonebook;
  std::cout << "Enter darkest secret:" << std::endl;
  std::cin >> newContact::darkest_secret;
}


void  ft_prompt(void)
{
  std::string input;

  std::cout << "Enter input :" << std::endl;
  std::cin >> input;
  while (input != "EXIT")
  {
      if (input == "ADD")
      {
        ft_add();
        std::cout << "add" << std::endl;
      }
      else if (input == "SEARCH")
        std::cout << "search" << std::endl;
      else if (input == "EXIT")
        std::cout << "exit" << std::endl;
      else
        std::cout << "Invalid input" << std::endl;
      std::cout << "Enter input :" << std::endl;
      std::cin >> input;
  }
}

int main(void)
{
  ft_prompt();
  std::cout << "Program terminated" << std::endl;
  return (0);
}
