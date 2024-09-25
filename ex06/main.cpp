/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:24:37 by lgasc             #+#    #+#             */
/*   Updated: 2024/09/25 17:58:20 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <cstdlib>	// EXIT_FAILURE
#include <iostream>	// cerr

int	main(const int argc, const char *const argv []) {
	if (argc - 1 != 1)
		return std::cerr << "\x1B[31mThe expectation is of one filter level."
			"\x1b[39m", EXIT_FAILURE;
	switch (Harl::ft_numerise(argv [1])) {
		case Harl::c_debug:
			std::cout << "[ " << Harl::ft_label(Harl::c_debug)
				<< " ]" << std::endl;
			Harl::complain(Harl::ft_label(Harl::c_debug));
			std::cout << std::endl;
			// Intentional fall through
		case Harl::c_info:
			std::cout << "[ " << Harl::ft_label(Harl::c_info)
				<< " ]" << std::endl;
			Harl::complain(Harl::ft_label(Harl::c_info));
			std::cout << std::endl;
			// Intentional fall through
		case Harl::c_warning:
			std::cout << "[ " << Harl::ft_label(Harl::c_warning)
				<< " ]" << std::endl;
			Harl::complain(Harl::ft_label(Harl::c_warning));
			std::cout << std::endl;
			// Intentional fall through
		case Harl::c_error:
			std::cout << "[ " << Harl::ft_label(Harl::c_error)
				<< " ]" << std::endl;
			Harl::complain(Harl::ft_label(Harl::c_error));
			std::cout << std::endl;

			break;
		default: case Harl::c_none:
			std::cout << "[ " << Harl::ft_label(Harl::c_none)
				<< " ]" << std::endl;
	}
}
