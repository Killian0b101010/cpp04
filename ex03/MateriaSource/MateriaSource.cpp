/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 00:00:45 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/29 06:10:02 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>
#include <string>

void MateriaSource::learnMateria(AMateria *m) {
  for (int i = 0; i <= 3; i++) {
    if (_Materia[i] == nullptr) {
      _Materia[i] = m;
      return;
    }
  }
  return;
}

MateriaSource::MateriaSource() {
  for (int i = 0; i < 4; i++)
    _Materia[i] = nullptr;
  std::cout << "MateriaSource created" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
  for (int i = 0; i <= 3; i++) {
    if (_Materia[i] && _Materia[i]->getType() == type) {
      return (_Materia[i]->clone());
    }
  }
  return (nullptr);
}
