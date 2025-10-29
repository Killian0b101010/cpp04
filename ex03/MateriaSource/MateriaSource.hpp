/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 00:09:33 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/29 01:58:21 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../AMateria/AMateria.hpp"
#include "../Character/Character.hpp"
#include "../IMateriaSource/IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource {
private:
  AMateria *_Materia[4];

public:
  ~MateriaSource() {}
  void learnMateria(AMateria *);
  AMateria *createMateria(std::string const &type);
};
