/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:17:31 by ishenriq          #+#    #+#             */
/*   Updated: 2025/10/25 13:17:33 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int argc, char **argv){

  if(argc != 2){
    std::cerr << "Error" << std::endl;
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
