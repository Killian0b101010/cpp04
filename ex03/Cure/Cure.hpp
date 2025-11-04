/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:27:31 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/04 19:00:42 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "../AMateria/AMateria.hpp"
class Cure : public AMateria {
private:
public:
  Cure();
  ~Cure();
  Cure &operator=(const Cure &cur);
  Cure(const Cure &other);
  virtual AMateria *clone() const;
  virtual void use(ICharacter &target);
};
#endif
