/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:50:20 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/04 16:53:04 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal/Animal.hpp"
#include "Cat/Cat.hpp"
#include "Dog/Dog.hpp"
#include "WrongAnimal/WrongAnimal.hpp"
#include "WrongCat/WrongCat.hpp"
#include "WrongDog/WrongDog.hpp"
#include <iostream>
int main() {

  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  std::cout << *meta << *j << *i <<std::endl; 
  i->makeSound();
  j->makeSound();
  meta->makeSound();
  std::cout << "NO VIRTUAL" << std::endl;
  const WrongAnimal *wrongmeta = new WrongAnimal();
  const WrongAnimal *wrongj = new WrongDog();
  const WrongAnimal *wrongi = new WrongCat();
  std::cout << wrongj->getType() << " " << std::endl;
  std::cout << wrongi->getType() << " " << std::endl;
  wrongi->makeSound();
  wrongj->makeSound();
  wrongmeta->makeSound();
  delete (meta);
  delete (j);
  delete (i);
  delete (wrongmeta);
  delete (wrongj);
  delete (wrongi);
}
