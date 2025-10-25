/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:48:47 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/25 22:49:07 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../WrongAnimal/WrongAnimal.hpp"
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class WrongCat : public WrongAnimal {
private:
  std::string name;

public:
  WrongCat();
  WrongCat(WrongCat &wrongcat);
  ~WrongCat();
  WrongCat &operator=(const WrongCat &other);
  void makeSound(void) const;
};
#endif
