/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:00:06 by lgasc             #+#    #+#             */
/*   Updated: 2024/09/17 19:48:52 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon	(std::string type) : type (type) {}

const std::string	& Weapon::getType(void) const { return type; }

void	Weapon::setType(const std::string & t) { type = t; }
