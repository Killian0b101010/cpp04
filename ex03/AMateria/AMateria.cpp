/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:54:23 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/28 01:47:14 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>
#include <string>
AMateria::AMateria(std::string const &type) { this->materia = type; }

AMateria::~AMateria() { std::cout << "Destructor AMateria" << std::endl; }
