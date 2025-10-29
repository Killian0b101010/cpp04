/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 01:19:48 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/29 05:51:20 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
#include <string>

Character::Character(std::string const name) {
  this->_name = name;
  for (int i = 0; i < 4; i++)
    _inventory[i] = nullptr;
  std::cout << "This character " << name << " is created" << std::endl;
}

std::string const &Character::getName() const { return (this->_name); }

void Character::equip(AMateria *m) {
  if (!m)
    return;
  for (int i = 0; i < 4; ++i) {
    if (!_inventory[i]) {
      _inventory[i] = m;
      return;
    }
  }
}

void Character::unequip(int idx) {
  if (idx > 3 || idx < 0)
    return;
  if (!_inventory[idx])
    return;
  else
    _inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target) {
  if (idx > 3 || idx < 0)
    return;
  if (!_inventory[idx])
    return;
  _inventory[idx]->use(target);
}

Character::~Character() {
  for (int i = 0; i <= 3; i++) {
    if (_inventory[i] != nullptr)
      delete _inventory[i];
  }
}
