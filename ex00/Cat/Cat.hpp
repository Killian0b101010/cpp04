/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:48:47 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/04 09:33:18 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Animal/Animal.hpp"
#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal {
private:
  std::string name;

public:
  Cat();
  Cat(Cat &cat);
  ~Cat();
  Cat(const Cat &copy);
  Cat &operator=(const Cat &other);
  void makeSound(void) const;
};
#endif
