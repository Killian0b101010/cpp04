/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:46:36 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/27 02:26:08 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

class Animal {

protected:
  std::string type;

public:
  Animal();
  Animal(Animal &other);
  Animal operator=(const Animal &ope);
  virtual ~Animal();
  std::string getType(void) const;
  virtual void makeSound(void) const;
};
#endif
std::ostream &operator<<(std::ostream &out, const Animal &a);
