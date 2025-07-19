/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:54:15 by ishenriq          #+#    #+#             */
/*   Updated: 2025/07/19 17:54:16 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

int main(void){
  int arr[] = {10, 20, 30};
  std::string words[] = {"ismael", "henrique", "da", "silva"};

  iter(arr, 3, triple<int>);
  iter(arr, 3, show<int>);

  iter(words, 4, show<std::string>);
  
  return(0);
}
