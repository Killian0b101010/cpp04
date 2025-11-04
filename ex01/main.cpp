/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:50:20 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/04 18:21:48 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal/Animal.hpp"
#include "Brain/Brain.hpp"
#include "Cat/Cat.hpp"
#include "Dog/Dog.hpp"
#include <iostream>

int main()
{
  const Animal* animals[4] = {new Dog(), new Cat(), new Dog(), new Cat()};
	std::cout << std::endl;
	
  for (int i = 0; i < 4; i++)
      delete animals[i];

  std::cout << std::endl;
	
  Cat original;
  Cat copy(original);
	for (int i = 0; i < 100; i++)
	  original.getBrain()->setIdeas(i, "Meow");
	for (int i = 0; i < 100; i++)
		original.getBrain()->printIdeas(i);
	std::cout << std::endl;
  for (int i = 0; i < 100; i++)
	  copy.getBrain()->setIdeas(i, "fdp");
  copy = original;
	for (int i = 0; i < 100; i++)
		copy.getBrain()->printIdeas(i);
	std::cout << std::endl;
}