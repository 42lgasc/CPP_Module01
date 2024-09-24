/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:58:53 by lgasc             #+#    #+#             */
/*   Updated: 2024/09/17 19:12:51 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA	(const std::string & name, const Weapon & w)
	: w (w), name (name) {}

void	HumanA::attack(void) const
{ std::cout << name << " attacks with their " << w.getType() << std::endl;}
