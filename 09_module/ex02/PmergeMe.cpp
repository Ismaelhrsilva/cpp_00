#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void){}

PmergeMe::~PmergeMe(void){}

PmergeMe::PmergeMe(const PmergeMe &other){
  *this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other){
  if (this != &other){
    _vector = other._vector;
    _deque = other._deque;
  }
  return *this;
}

void PmergeMe::print(std::string str) const{
  std::cout << str;
  for (size_t i = 0; i < _vector.size(); ++i) {
    std::cout << _vector[i];
    if (i != _vector.size() - 1)
      std::cout << " ";
  }
  std::cout << std::endl;
}

//void PmergeMe::sortAndMeasure(void);

void PmergeMe::parseInput(int argc, char **argv){
  std::set<int> seen;

  for (int i = 1; i < argc; ++i) {
    std::string arg = argv[i];

    for (size_t j = 0; j < arg.size(); ++j) {
      if (!std::isdigit(arg[j]))
        throw std::runtime_error("invalid character in input: " + arg);
    }

    if (arg.empty())

      throw std::runtime_error("Empty input");
    long num = std::atol(arg.c_str());

    if (num < 0 || num > INT_MAX)
      throw std::runtime_error("Number out of range: " + arg);

    if (!seen.insert(static_cast<int>(num)).second)
      throw std::runtime_error("Duplicate number" + arg);

    _vector.push_back(static_cast<int>(num));
    _deque.push_back(static_cast<int>(num));
  }
}

void PmergeMe::process(int argc, char **argv){
  parseInput(argc, argv);
  print("Before: ");
  // sortAndMeasure();
  print("After: ");
}

