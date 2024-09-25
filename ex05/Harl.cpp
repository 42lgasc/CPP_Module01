/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:11:14 by lgasc             #+#    #+#             */
/*   Updated: 2024/09/25 18:02:50 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream> // cout, endl

const Harl::s_entry	Harl::map [] = { { "DEBUG", debug, c_debug },
	{ "INFO", info, c_info }, { "WARNING", warning, c_warning },
	{ "ERROR", error, c_error} };

void	Harl::complain(const std::string & level) {
	const s_entry *e;
	for (e = map; e < (& map) [1]; ++ e)
		if (e->label == level) { e->action(); break; }
	if (e == (& map) [1])
		std::cout << "Mmmmh...\nBuhcon borgor..." << std::endl;
}

const std::string	Harl::ft_label(const enum e_level & l) {
	for (const s_entry	*e = map; e < (& map) [1]; ++ e)
		if (e->tag == l) return e->label;
	return "Probably complaining about insignificant problems";
}

enum Harl::e_level	Harl::ft_numerise(const std::string & level) {
	for (const s_entry	*e = map; e < (& map) [1]; ++ e)
		if (e->label == level) return e->tag;
	return c_none;
}

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my"
		" 7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
		"I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money.\n"
		"You didn’t put enough bacon in my burger!\n"
		"If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free.\n"
		"I’ve been coming for years whereas you started"
		" working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}
