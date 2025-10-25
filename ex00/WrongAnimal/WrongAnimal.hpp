/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:46:36 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/25 22:48:55 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>

class WrongAnimal {

protected:
  std::string type;

public:
  WrongAnimal();
  WrongAnimal(WrongAnimal &other);
  WrongAnimal &operator=(const WrongAnimal &ope);
  ~WrongAnimal();
  std::string getType(void) const;
  void makeSound(void) const;
};
#endif
std::ostream &operator<<(std::ostream &out, const WrongAnimal &a);
