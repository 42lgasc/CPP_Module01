/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:05:59 by lgasc             #+#    #+#             */
/*   Updated: 2024/09/17 17:38:40 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	const int	amount = 8;

	Zombie	*horde = Zombie::zombieHorde(amount, "Nehilin");
	for (size_t i = 0; i < amount; ++ i) horde [i].announce();
	delete [] horde;
}
