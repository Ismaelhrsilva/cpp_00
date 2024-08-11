#include <iostream>

int main(int argc, char **argv)
{
  if (argc < 2)
  {
    std::cout << "Program not inicializaded" << std::endl;
    return (1);
  }
  std::string input = argv[1];

  while (input != "EXIT")
  {
      std::cout << "Enter input";
      std::cin >> input << std::endl;
      if (input == "ADD")
        std::cout << "add" << std::endl;
      else if (input == "SEARCH")
        std::cout << "search" << std::endl;
      else if (input == "EXIT")
        std::cout << "exit" << std::endl;
      else
        std::cout << "Invalid input" << std::endl;
  }
  std::cout << "Program terminated" << std::endl;
  return (0);
}
