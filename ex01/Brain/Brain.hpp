/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 01:11:06 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/04 17:45:31 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Animal/Animal.hpp"
#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
class Brain {

private:
  std::string ideas[100];

public:
  Brain();
  Brain(const Brain &other);
  Brain &operator=(const Brain &other);
  void setIdeas(int _ideas, std::string name);
  std::string getIdeas(int _ideas) const;
  virtual ~Brain();
  void printIdeas(int id);
};
#endif
