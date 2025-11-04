/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:12:15 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/04 18:08:23 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
  this->type= "Dog";
  std::cout << "Constructor Dog created" << std::endl;
}

Dog:: Dog(const Dog &copy) : Animal(copy)
{
  this->brain = new Brain(*copy.brain);
    std::cout << "Dog Constructor at Copy called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
 {
  if(this != &other)
  {
    this->type = other.type;
    delete brain;
    brain = new Brain(*other.brain);
  }
  return(*this);
 }
 
void Dog::makeSound(void) const { std::cout << "Wouuuuaaaff!" << std::endl; }

Dog::~Dog() { delete this-> brain;std::cout << "Destructor at " << this->type << std::endl; }

Brain *Dog::getBrain()
{
 return(this->brain);
}