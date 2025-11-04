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
  this->type= "Cat";
  this->brain = new Brain();
  std::cout << "Constructor Cat created" << std::endl;
}

Cat::~Cat() { delete this-> brain;std::cout << "Destructor at Cat" << std::endl; }

Cat:: Cat(const Cat &copy) : Animal(copy)
{

  this->type = copy.type;
  this->brain = new Brain(*copy.brain);
  std::cout << "Cat Constructor at Copy called" << std::endl;
}

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

Brain *Cat::getBrain()
{
 return(this->brain);
}
void Cat::makeSound(void) const { std::cout << this->getType() << "Miaouuuuuuuu" << std::endl; }
