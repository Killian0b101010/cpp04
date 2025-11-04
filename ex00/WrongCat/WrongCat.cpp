/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:48:25 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/25 22:25:56 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
  this->name = "WrongCat";
  std::cout << "Constructor WrongCat created" << std::endl;
}
WrongCat::~WrongCat() { std::cout << "Destructor at WrongCat" << std::endl; }

void WrongCat::makeSound(void) const {
  std::cout << this->name << " : WrongMiaouuuuuuuu" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy){*this=cpy;}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
 if(this != &other)
    this->name = other.name;
  return(*this);
}
