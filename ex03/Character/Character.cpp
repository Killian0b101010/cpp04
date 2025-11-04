/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 01:19:48 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/04 19:29:28 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
#include <string>

Character::Character()
{
  this->_name = "Default";
  for (int i = 0; i < 4; i++)
    _inventory[i] = NULL;
  std::cout << "This character " << _name << " is created" << std::endl;
}

Character::Character(std::string const name) {
  this->_name = name;
  for (int i = 0; i < 4; i++)
    _inventory[i] = NULL;
  std::cout << "This character " << name << " is created" << std::endl;
}

Character::Character(const Character &copy)
{
   *this = copy;
   std::cout << "Constructor copy is created" << std::endl;
}

Character::~Character() {
  for (int i = 0; i <= 3; i++) {
    if (_inventory[i] != NULL)
      delete _inventory[i];
  }
   std::cout << "Destructor is called" << std::endl;
}

Character &Character::operator=(const Character &other)
{
  if (this != &other)
	{
		this->_name = other.getName();
		for (int i = 0; i < 4; i++)
		{
			delete this->_inventory[i];
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
  }
  return(*this);
}

std::string const &Character::getName() const { return (this->_name); }

void Character::equip(AMateria *m) {
  if (!m)
    return;
  for (int i = 0; i < 4; ++i) {
    for(int j = 0; j <=3; j++)
    {
      if(_inventory[j] == m)
        return;
    }
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
    _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
  if (idx > 3 || idx < 0)
    return;
  if (!_inventory[idx])
    return;
  _inventory[idx]->use(target);
}
