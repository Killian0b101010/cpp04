/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 01:19:43 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/28 02:00:55 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CHARACTER
#define CHARACTER
#include "../ICharacter/ICharacter.hpp"
#include <string>
class AMateria;
class Character : public ICharacter {
protected:
  std::string _name;

public:
  virtual std::string const &getName() const = 0;
  virtual void equip(AMateria *m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, Character &target) = 0;
};
#endif
