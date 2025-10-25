/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:51:30 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/25 22:48:42 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../WrongAnimal/WrongAnimal.hpp"
#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

class WrongDog : public WrongAnimal {
private:
  std::string name;

public:
  WrongDog();
  WrongDog(WrongDog &wrongdog);
  WrongDog &operator=(const WrongDog &wrongother);
  ~WrongDog();
  void makeSound(void) const;
};
#endif
