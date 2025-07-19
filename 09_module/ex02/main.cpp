/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:07:54 by ishenriq          #+#    #+#             */
/*   Updated: 2025/07/19 18:28:43 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int argc, char *argv[]) {
  if (argc < 2){
    std::cerr << "Error: at least on number is required." << std::endl;
    return 1;
  }

  try {
    PmergeMe sorter;
    sorter.process(argc, argv);
  }
  catch (const std::exception&e ) {
    std::cerr << "Error: " << e.what() << std::endl;
    return 1;
  }
  return 0;
}
