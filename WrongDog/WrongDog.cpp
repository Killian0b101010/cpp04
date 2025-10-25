/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:12:15 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/25 22:28:41 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"
#include <iostream>

WrongDog::WrongDog() {
  this->name = "WrongDog";
  std::cout << "Constructor WrongDog created" << std::endl;
}

void WrongDog::makeSound(void) const {
  std::cout << this->name << " : Wouuuuaaaff!" << std::endl;
}
WrongDog::~WrongDog() {
  std::cout << "Destructor at " << this->name << std::endl;
}
