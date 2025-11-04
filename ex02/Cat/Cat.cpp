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
  this->brain = new Brain();
}

Cat::~Cat() { std::cout << "Destructor at Cat" << std::endl; }

Cat &Cat::operator=(const Cat &other)
 {
  if(this != &other)
  {
    this->type = other.type;
    delete brain;
    brain = new Brain(*other.brain);
  }
  return(*this);
 }
 
 Cat:: Cat(const Cat &copy) : Animal(copy)
{
  this->brain = new Brain(*copy.brain);
  std::cout << "Cat Constructor at Copy called" << std::endl;
}
void Cat::makeSound(void) const { std::cout << "Miaouuuuuuuu" << std::endl; }
