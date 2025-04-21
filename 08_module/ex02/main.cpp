#include "MutantStack.hpp"
#include <iostream>
#include <list>

void printLine(const std::string &title) {
  std::cout << "\n=== " << title << " ===" << std::endl;
}

int main(void)
{
  MutantStack<int> mstack;

  printLine("Pushing elements into MutantStack");
  mstack.push(5);
  mstack.push(17);
  std::cout << "Top element: " << mstack.top() << std::endl;

  mstack.pop();

  std::cout << "Size after pop: " << mstack.size() << std::endl;

  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);

  printLine("Iterating with begin() to end()");
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  for (; it != ite; ++it)
	std::cout << *it << std::endl;

  printLine("Iterating in reverse with rbegin() to rend()");
  MutantStack<int>::reverse_iterator rit = mstack.rbegin();
  MutantStack<int>::reverse_iterator rite = mstack.rend();
  for (; rit != rite; ++rit)
	std::cout << *rit << std::endl;

  printLine("Testing copy constructor and assignment");
  MutantStack<int> copyStack(mstack);
  MutantStack<int> assignedStack;
  assignedStack = mstack;

  std::cout << "Copy top: " << copyStack.top() << std::endl;
  std::cout << "Assigned top: " << assignedStack.top() << std::endl;

  printLine("Comparison with std::list (subject test)");
  std::list<int> lst;
  lst.push_back(5);
  lst.push_back(17);
  std::cout << "Top element in list: " << lst.back() << std::endl;
  lst.pop_back();

  lst.push_back(3);
  lst.push_back(5);
  lst.push_back(737);
  lst.push_back(0);

  std::list<int>::iterator lit = lst.begin();
  std::list<int>::iterator lite = lst.end();
  for (; lit != lite; ++lit)
	std::cout << *lit << std::endl;

  return 0;
}
