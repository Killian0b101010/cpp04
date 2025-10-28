
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 04:44:39 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/28 01:48:26 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
class Character;
class AMateria;
class ICharacter {
public:
  virtual ~ICharacter() {}
  virtual std::string const &getName() const = 0;
  virtual void equip(AMateria *m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, ICharacter &target) = 0;
};
#endif
