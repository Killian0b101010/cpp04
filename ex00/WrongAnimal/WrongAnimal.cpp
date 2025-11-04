/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 00:19:29 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/04 09:37:50 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() 
{
  this->type = "WrongAnimal";
  std::cout << "Constructor " << this->type << " Created" << std::endl;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "Destructor at WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType() const { return (this->type); }

void WrongAnimal::makeSound(void) const {
  std::cout << "Default sounddddd j" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const WrongAnimal &a) {
  out << a.getType();
  return out;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
  if(this != &copy)
   this->type = copy.type;
  return(*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy){*this = cpy;}
