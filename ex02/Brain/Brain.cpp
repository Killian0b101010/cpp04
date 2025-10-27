/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 01:10:57 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/27 03:20:11 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "iostream"

Brain::Brain() { std::cout << "This brain is created" << std::endl; }

void Brain::setIdeas(int _ideas, std::string name) {
  if (_ideas >= 100 || _ideas < 0) {
    std::cout << "Bad index" << std::endl;
    return;
  }
  ideas[_ideas] = name;
}
Brain::Brain(const Brain &other) {
  for (int i = 0; i < 100; i++)
    this->ideas[i] = other.ideas[i];
}

Brain::~Brain() { std::cout << "Brain destroyed" << std::endl; }

Brain &Brain::operator=(const Brain &other) {

  for (int i = 0; i < 100; i++)
    this->ideas[i] = other.ideas[i];
  return (*this);
}

std::string Brain::getIdeas(int _ideas) const {
  if (_ideas >= 100 || _ideas < 0)
    std::cout << "Bad index" << std::endl;
  return (this->ideas[_ideas]);
}
