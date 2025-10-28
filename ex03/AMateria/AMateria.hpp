/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 04:37:33 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/28 01:42:08 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "../ICharacter/ICharacter.hpp"
#include <string>

class AMateria {
protected:
  std::string materia;

public:
  AMateria();
  ~AMateria();
  AMateria(std::string const &type);
  AMateria(const AMateria &other);
  AMateria &operator=(const AMateria &other);
  std::string const &getType() const;
  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target) = 0;
};
#endif
