/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:50:20 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/27 02:27:48 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal/Animal.hpp"
#include "Brain/Brain.hpp"
#include "Cat/Cat.hpp"
#include "Dog/Dog.hpp"
#include <iostream>

int main() {
  std::cout << "Polymorphisme simple" << std::endl;
  const Animal *j = new Dog();
  const Animal *i = new Cat();

  delete j;
  delete i;

  std::cout << "\n----- Deep copy Brain test -----" << std::endl;

  Brain original;
  original.setIdeas(0, "Sleep");
  original.setIdeas(1, "Eat");
  original.setIdeas(2, "Play");
  Brain copy(original);
  copy.setIdeas(0, "Run");
  std::cout << "Original idea[0]: " << original.getIdeas(0) << std::endl;
  std::cout << "Copy idea[0]: " << copy.getIdeas(0) << std::endl;

  std::cout << "\n----- Array of Animals test -----" << std::endl;
  const Animal *animals[4];
  for (int k = 0; k < 2; k++)
    animals[k] = new Dog();
  for (int k = 2; k < 4; k++)
    animals[k] = new Cat();

  for (int k = 0; k < 4; k++)
    delete animals[k];

  return 0;
}
