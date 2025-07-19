/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:54:34 by ishenriq          #+#    #+#             */
/*   Updated: 2025/07/19 17:54:36 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#define MAX_VAL 750


int main(int, char**) {
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));

    std::cout << "Filling both arrays with random values..." << std::endl;
    for (int i = 0; i < MAX_VAL; i++) {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    std::cout << "Testing deep copy..." << std::endl;
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        std::cout << "Temporary objects copied successfully." << std::endl;
    }

    std::cout << "Comparing original array with mirror..." << std::endl;
    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i]) {
            std::cerr << "Error: Value mismatch at index " << i << std::endl;
            return 1;
        }
    }
    std::cout << "All values match. Deep copy is valid." << std::endl;

    std::cout << "Testing negative index access..." << std::endl;
    try {
        numbers[-2] = 0;
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "Testing out-of-bounds access..." << std::endl;
    try {
        numbers[MAX_VAL] = 0;
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "Overwriting all array elements..." << std::endl;
    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = rand();
    }

    std::cout << "Cleaning up mirror array memory." << std::endl;
    delete[] mirror;

    std::cout << "All tests completed successfully." << std::endl;
    return 0;
}

