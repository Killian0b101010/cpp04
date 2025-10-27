/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:12:15 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/27 03:21:26 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
  this->name = "Dog";
  std::cout << "Constructor Dog created" << std::endl;
  this->brain = new Brain();
  this->brain->setIdeas(0, "Play");
  this->brain->setIdeas(1, "Ronfle");
  this->brain->setIdeas(2, "Pete");

  for (int i = 0; i < 3; i++)
    std::cout << this->brain->getIdeas(i) << std::endl;
}

void Dog::makeSound(void) const { std::cout << "Wouuuuaaaff!" << std::endl; }
Dog::~Dog() { std::cout << "Destructor at " << this->name << std::endl; }
