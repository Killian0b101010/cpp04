/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 00:19:29 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/04 16:43:10 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() {

  this->type = "Animal";
  std::cout << "Constructor " << this->type << " Created" << std::endl;
}
Animal::~Animal() { std::cout << "Destructor at Animal" << std::endl; }

std::string Animal::getType()const{return(this->type);}

void Animal::makeSound(void)const
{
  std::cout<< "Default sound" << std::endl;
} 
Animal &Animal::operator=(const Animal &ope)
{
  if(this != &ope)
    this->type = ope.type;
  return(*this);
}

std::ostream &operator<<(std::ostream &out, const Animal &a) {
  out << a.getType() << " ";
  return out;
}

Animal::Animal(const Animal &copy){*this = copy;}
