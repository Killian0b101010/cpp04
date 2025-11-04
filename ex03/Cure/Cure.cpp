/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:26:33 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/04 19:20:51 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") { std::cout << "Je suis une AMateria de type cure" << std::endl;
}

Cure::~Cure() { std::cout << "Cure is destroyed" << std::endl; }

Cure::Cure(Cure const &cpy)
{
  *this = cpy;
}

Cure &Cure::operator=(Cure const &cpy)
{
  if(this != &cpy)
    this ->_type = cpy.getType();
  return(*this);
}

AMateria *Cure::clone() const {
  AMateria *n = new Cure();
  return (n);
}

void Cure::use(ICharacter &target) {
  std::cout << "Heal " << target.getName() << " wounds" << std::endl;
}
