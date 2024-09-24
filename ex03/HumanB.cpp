/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:00:34 by lgasc             #+#    #+#             */
/*   Updated: 2024/09/17 19:31:13 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB	(const std::string & name) : name (name), w (NULL) {}

void	HumanB::setWeapon(const Weapon & w) { this->w = & w; }

void	HumanB::attack(void) const
{ std::cout << name << " attacks with their " << w->getType() << std::endl;}
