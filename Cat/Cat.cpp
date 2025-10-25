/* ************************************************************************** */ /*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:48:25 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/25 22:01:26 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>
Cat::Cat() {
  this->name = "Cat";
  std::cout << "Constructor Cat created" << std::endl;
}
Cat::~Cat() { std::cout << "Destructor at Cat" << std::endl; }

void Cat::makeSound(void) const { std::cout << "Miaouuuuuuuu" << std::endl; }
