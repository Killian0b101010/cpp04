/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 00:09:33 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/04 19:24:09 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Character/Character.hpp"
#include "../IMateriaSource/IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource {
private:
  AMateria *_Materia[4];

public:
  MateriaSource();
  ~MateriaSource();
  MateriaSource( const MateriaSource &copy);
  void learnMateria(AMateria *);
  MateriaSource &operator=(const MateriaSource &other);
  AMateria *createMateria(std::string const &type);
};
