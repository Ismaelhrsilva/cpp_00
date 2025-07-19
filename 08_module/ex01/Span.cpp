/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:00:27 by ishenriq          #+#    #+#             */
/*   Updated: 2025/07/19 18:00:28 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <limits>
#include <iostream>


Span::Span(void){}

Span::Span(unsigned int capacity) : _capacity(capacity) {}

Span::Span(const Span& other) : _storage(other._storage), _capacity(other._capacity) {}

Span& Span::operator=(const Span& other) {
  if (this != &other) {
	_storage = other._storage;
	_capacity = other._capacity;
  }
  return *this;
}

Span::~Span() {}

void Span::addNumber(int number) {
  if (_storage.size() >= _capacity)
	throw std::runtime_error("Span is full");
  _storage.push_back(number);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
  if (_storage.size() + std::distance(begin, end) > _capacity)
	throw std::runtime_error("Adding this range would exceed Span capacity");
  _storage.insert(_storage.end(), begin, end);
}

int Span::shortestSpan() const {
  if (_storage.size() < 2)
	throw std::runtime_error("Not enough numbers to calculate span");

  std::vector<int> sorted = _storage;
  std::sort(sorted.begin(), sorted.end());

  int minSpan = std::numeric_limits<int>::max();
  for (std::vector<int>::size_type i = 1; i < sorted.size(); ++i) {
	int diff = sorted[i] - sorted[i - 1];
	if (diff < minSpan)
	  minSpan = diff;
  }
  return minSpan;
}

int Span::longestSpan() const {
  if (_storage.size() < 2)
	throw std::runtime_error("Not enough numbers to calculate span");

  std::vector<int>::const_iterator min = std::min_element(_storage.begin(), _storage.end());
  std::vector<int>::const_iterator max = std::max_element(_storage.begin(), _storage.end());
  return *max - *min;
}
