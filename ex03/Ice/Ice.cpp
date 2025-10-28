/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 02:04:30 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/28 02:08:27 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() { std::cout << "Je suis une AMateria de type ice" << std::endl; }

Ice::~Ice() { std::cout << "ice is destroyed" << std::endl; }

AMateria *Ice::clone() const {
  AMateria *i = new Ice();
  return (i);
}

void Ice::use(ICharacter &target) {
  std::cout << "Heal" << &target << "wounds" << std::endl;
}
