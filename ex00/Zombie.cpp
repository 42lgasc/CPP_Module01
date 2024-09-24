/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:11:00 by lgasc             #+#    #+#             */
/*   Updated: 2024/09/17 17:07:31 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

// # Exercise 00: BraiiiiiiinnnzzzZ ############################################

void	Zombie::announce(void) const {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*Zombie::newZombie(const std::string name) { return new Zombie (name); }

void	Zombie::randomChump(const std::string name) { Zombie(name).announce(); }

Zombie::~ Zombie	(void) {
	std::clog << "\x1B[3;90m" << name
		<< " returns to the grave.\x1B[23;39m" << std::endl;
}

// # Exercise 01: Moar brainz! #################################################

// https://stackoverflow.com/a/52752491/14792858
Zombie	*Zombie::zombieHorde(const int n, const std::string name) {
	Zombie	*horde = new Zombie [n];
	for (int i = 0; i < n; ++ i) horde [i].name = name;
	return horde;
}
