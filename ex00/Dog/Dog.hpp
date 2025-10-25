/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:51:30 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/25 22:30:51 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Animal/Animal.hpp"
#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal {
private:
  std::string name;

public:
  Dog();
  Dog(Dog &dog);
  Dog operator=(const Dog &other);
  ~Dog();
  void makeSound(void) const;
};
#endif
