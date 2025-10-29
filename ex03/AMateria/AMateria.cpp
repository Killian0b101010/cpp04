/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:54:23 by kiteixei          #+#     #+# */
/*   Updated: 2025/10/29 02:39:19 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>
#include <string>

AMateria::AMateria(std::string const &type) {
  this->_type = type;
  std::cout << "AMateria constructor created" << std::endl;
}

std::string const &AMateria::getType() const { return (this->_type); }

AMateria &AMateria::operator=(const AMateria &other) {

  this->_type = other.getType();
  return (*this);
}

AMateria::AMateria(AMateria const &copy) { this->_type = copy._type; }
AMateria::~AMateria() { std::cout << "Destructor AMateria" << std::endl; }
