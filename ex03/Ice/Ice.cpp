/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 02:04:30 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/04 19:22:00 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>


Ice::Ice() : AMateria("ice") { std::cout << "Je suis une AMateria de type ice" << std::endl;
}

Ice::~Ice() { std::cout << "ice is destroyed" << std::endl; }

AMateria *Ice::clone() const {
  AMateria *i = new Ice();
  return (i);
}

Ice &Ice::operator=(Ice const &cpy)
{
  if(this != &cpy)
    this ->_type = cpy.getType();
  return(*this);
}

void Ice::use(ICharacter &target) {
  std::cout << "shoot an ice bolt at" << target.getName() << std::endl;
}
