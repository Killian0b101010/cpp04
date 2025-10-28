/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 01:19:43 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/28 04:43:32 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CHARACTER
#define CHARACTER

#include "../AMateria/AMateria.hpp"
#include "../ICharacter/ICharacter.hpp"
#include <string>

class AMateria;
class Character : public ICharacter {
protected:
  std::string _name;
  AMateria *_inventory[4];

public:
  std::string const &getName() const;
  void equip(AMateria *m);
  void unequip(int idx);
  void use(int idx, Character &target);
};
#endif
