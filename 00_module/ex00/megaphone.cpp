#include <iostream>
#include <string>

int main(int argc, char  **argv)
{
  if (argc == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  else {
  for (int i = 1; i < argc; i++) {
	std::string arg(argv[i]);
    for (std::string::size_type j = 0; j < arg.size(); ++j){
				arg[j] = static_cast<char>(toupper(arg[j]));
	}
	std::cout << arg;
    if (i < argc - 1)
      std::cout << " ";
	}
  }
  std::cout << std::endl;
  return (0);
}
