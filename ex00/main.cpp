/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:05:59 by lgasc             #+#    #+#             */
/*   Updated: 2024/09/17 15:10:50 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	const Zombie	*woken = Zombie::newZombie("Pilek");
	Zombie::randomChump("Marzan");
	woken->announce();
	delete woken;
}
