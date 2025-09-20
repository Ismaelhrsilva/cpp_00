/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:08:05 by ishenriq          #+#    #+#             */
/*   Updated: 2025/09/20 18:31:00 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void mergeInsertionSortVector(std::vector<int>& vec){
	if (vec.size() == 1)
		return ;

	std::vector<int> left;
	std::vector<int> right;
	std::vector<int> pend;

	for (size_t i = 0; i + 1 < vec.size(); i+= 2){
		int a = vec[i];
		int b = vec[i+ 1];
		if (a > b){
			left.push_back(a);
			pend.push_back(b);
		} else {
			left.push_back(b);
			pend.push_back(a);
		}
	}

	if (vec.size() % 2 != 0)
		right.push_back(vec.back());
	mergeInsertionSortVector(left);

	for (size_t i = 0; i < pend.size(); ++i){
		std::vector<int>::iterator pos = std::lower_bound(left.begin(), left.end(), pend[i]);
		left.insert(pos, pend[i]);
	}

	for (size_t i = 0; i < right.size(); ++i){
		std::vector<int>::iterator pos = std::lower_bound(left.begin(), left.end(), right[i]);
		left.insert(pos, right[i]);
	}

	vec = left;
}

void mergeInsertionSortDeque(std::deque<int>& vec){
	if (vec.size() == 1)
		return ;

	std::deque<int> left;
	std::deque<int> right;
	std::deque<int> pend;

	for (size_t i = 0; i + 1 < vec.size(); i+= 2){
		int a = vec[i];
		int b = vec[i+ 1];
		if (a > b){
			left.push_back(a);
			pend.push_back(b);
		} else {
			left.push_back(b);
			pend.push_back(a);
		}
	}

	if (vec.size() % 2 != 0)
		right.push_back(vec.back());
	mergeInsertionSortDeque(left);

	for (size_t i = 0; i < pend.size(); ++i){
		std::deque<int>::iterator pos = std::lower_bound(left.begin(), left.end(), pend[i]);
		left.insert(pos, pend[i]);
	}

	for (size_t i = 0; i < right.size(); ++i){
		std::deque<int>::iterator pos = std::lower_bound(left.begin(), left.end(), right[i]);
		left.insert(pos, right[i]);
	}

	vec = left;
}

void PmergeMe::sortAndMeasure(void){
	std::clock_t startVec = std::clock();
	mergeInsertionSortVector(_vector);
	std::clock_t endVec = std::clock();

	std::clock_t startDeq = std::clock();
	mergeInsertionSortDeque(_deque);
	std::clock_t endDeq = std::clock();

	double timeVec= static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC * 1000000.0;
	double timeDeq = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC * 1000000.0;

	std::cout << "Time to process a range of " << _vector.size()
			  << " elements with std::vector : " << timeVec << " us" << std::endl;

	std::cout << "Time to process a range of " << _deque.size()
			  << " elements with std::deque  : " << timeDeq << " us" << std::endl;
}

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
      throw std::runtime_error("Duplicate number " + arg);

    _vector.push_back(static_cast<int>(num));
    _deque.push_back(static_cast<int>(num));
  }
}

void PmergeMe::process(int argc, char **argv){
  parseInput(argc, argv);
  print("Before: ");
  sortAndMeasure();
  print("After: ");
}

