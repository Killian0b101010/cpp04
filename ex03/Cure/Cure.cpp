/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:26:33 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/28 01:49:39 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() { std::cout << "Je suis une AMateria de type cure" << std::endl; }

Cure::~Cure() { std::cout << "Cure is destroyed" << std::endl; }

AMateria *Cure::clone() const {
  AMateria *n = new Cure();
  return (n);
}

void Cure::use(ICharacter &target) {
  std::cout << "Heal" << &target << "wounds" << std::endl;
}
