/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 04:52:08 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/29 00:43:13 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria/AMateria.hpp"
#include "Cure/Cure.hpp"
#include "ICharacter/ICharacter.hpp"
#include "Ice/Ice.hpp"
#include "MateriaSource/MateriaSource.hpp"

int main() {
  IMateriaSource *src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());
  ICharacter *me = new Character("me");
  AMateria *tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
  ICharacter *bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);
  delete bob;
  delete me;
  delete src;
  return 0;
}
