/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 00:00:45 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/04 19:22:25 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>
#include <string>

MateriaSource::MateriaSource()
{
  for (int i = 0; i < 4; i++)
    _Materia[i] = NULL;
  std::cout << "This materia default constructor is created" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
   *this = copy;
   std::cout << "Constructor  copy is created" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m) {
  for (int i = 0; i <= 3; i++) {
    if (_Materia[i] == NULL) {
      _Materia[i] = m;
      return;
    }
  }
  return;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
  if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->_Materia[i];
			if (other._Materia[i])
				this->_Materia[i] = other._Materia[i]->clone();
			else
				this->_Materia[i] = NULL;
		}
  }
  return(*this);
}

 MateriaSource::~MateriaSource() {
  for (int i = 0; i <= 3; i++) {
    if (_Materia[i] != NULL)
      delete _Materia[i];
  }
}

AMateria *MateriaSource::createMateria(std::string const &type) {
  for (int i = 0; i <= 3; i++) {
    if (_Materia[i] && _Materia[i]->getType() == type) {
      return (_Materia[i]->clone());
    }
  }
  return (NULL);
}
