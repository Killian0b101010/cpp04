/* ************************************************************************** */ /*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:48:25 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/25 22:01:26 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "../Brain/Brain.hpp"
#include <iostream>

Cat::Cat() {
  this->name = "Cat";
  std::cout << "Constructor Cat created" << std::endl;
  this->brain->setIdeas(0, "Think");
  this->brain->setIdeas(1, "Eat");
  this->brain->setIdeas(2, "Read");

  for (int i = 0; i < 3; i++)
    std::cout << this->brain->getIdeas(i) << std::endl;
}
Cat::~Cat() { std::cout << "Destructor at Cat" << std::endl; }

void Cat::makeSound(void) const { std::cout << "Miaouuuuuuuu" << std::endl; }
