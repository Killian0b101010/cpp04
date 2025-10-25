/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:12:15 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/25 22:00:40 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
  this->name = "Dog";
  std::cout << "Constructor Dog created" << std::endl;
}

void Dog::makeSound(void) const { std::cout << "Wouuuuaaaff!" << std::endl; }
Dog::~Dog() { std::cout << "Destructor at " << this->name << std::endl; }
