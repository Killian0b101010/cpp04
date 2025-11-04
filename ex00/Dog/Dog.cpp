/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:12:15 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/04 09:19:03 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
  this->name = "Dog";
  std::cout << "Constructor Dog created" << std::endl;
}

Dog::Dog(const Dog &copy){ *this = copy;}

Dog &Dog::operator=(const Dog &other)
 {
  if(this != &other)
    this->type = other.name;
  return(*this);
 }

void Dog::makeSound(void) const { std::cout << "Wouuuuaaaff!" << std::endl; }

Dog::~Dog() { std::cout << "Destructor at " << this->name << std::endl; }
