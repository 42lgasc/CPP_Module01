/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:22:01 by lgasc             #+#    #+#             */
/*   Updated: 2024/09/25 18:06:06 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream> // cout, endl

int	main(void) {
	Harl::complain("DEBUG");
	std::cout << std::endl;
	Harl::complain("INFO");
	std::cout << std::endl;
	Harl::complain("WARNING");
	std::cout << std::endl;
	Harl::complain("ERROR");
	std::cout << std::endl;
	Harl::complain("NOISE");
}
