#include "RPN.hpp"


int main(int argc, char **argv){

  if(argc != 2){
    std::cerr << "Error: only one argument" << std::endl;
    return 1;
  }

  Polish rpn;

  try {
    int result = rpn.evaluate(argv[1]);
    std::cout << result << std::endl;
  }
  catch (const std::exception& e) {
    std::cerr << "Error" << std::endl;
    return 1;
  }

  return 0;
}
