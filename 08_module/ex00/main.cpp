#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>

#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define RESET   "\033[0m"

void testVector() {
	std::cout << GREEN << "\nTesting std::vector<int>..." << RESET << std::endl;
	std::vector<int> vec;
	for (int i = 1; i <= 10; ++i)
		vec.push_back(i);

	try {
		std::vector<int>::iterator it = easyfind(vec, 3);
		std::cout << "Found in vector: " << *it << std::endl;
	} catch (std::exception &e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	try {
		std::vector<int>::iterator it = easyfind(vec, 42);
		std::cout << "Found in vector: " << *it << std::endl;
	} catch (std::exception &e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}
}

void testDeque() {
	std::cout << GREEN << "\nTesting std::deque<int>..." << RESET << std::endl;
	std::deque<int> dq;
	for (int i = 10; i <= 20; ++i)
		dq.push_back(i);

	try {
		std::deque<int>::iterator it = easyfind(dq, 15);
		std::cout << "Found in deque: " << *it << std::endl;
	} catch (std::exception &e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	try {
		std::deque<int>::iterator it = easyfind(dq, 5);
		std::cout << "Found in deque: " << *it << std::endl;
	} catch (std::exception &e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}
}

void testList() {
	std::cout << GREEN << "\nTesting std::list<int>..." << RESET << std::endl;
	std::list<int> lst;
	for (int i = 100; i <= 110; ++i)
		lst.push_back(i);

	try {
		std::list<int>::iterator it = easyfind(lst, 105);
		std::cout << "Found in list: " << *it << std::endl;
	} catch (std::exception &e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	try {
		std::list<int>::iterator it = easyfind(lst, 999);
		std::cout << "Found in list: " << *it << std::endl;
	} catch (std::exception &e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}
}

int main() {
	testVector();
	testDeque();
	testList();
	return 0;
}
