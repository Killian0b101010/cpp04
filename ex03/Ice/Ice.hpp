/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 02:04:37 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/29 06:32:00 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "../AMateria/AMateria.hpp"
class Ice : public AMateria {
private:
public:
  Ice() : AMateria("ice") {}
  ~Ice();
  Ice &operator=(const Ice &ice);
  Ice(const Ice &other);
  virtual AMateria *clone() const;
  virtual void use(ICharacter &target);
};
#endif
