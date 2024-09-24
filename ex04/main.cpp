/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:55:14 by lgasc             #+#    #+#             */
/*   Updated: 2024/09/24 17:31:57 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>	// EXIT_FAILURE
#include <fstream>	// ifstream, ofstream
#include <iostream>	// cerr, endl
#include <string>	// string

int	main(const int argc, const char *const argv []) {
	const std::string & c_error	= "\x1B[31m";
	const std::string & c_reset	= "\x1B[39m";

	if (argc - 1 != 3 or argv [1] [0] == '\0' or argv [2] [0] == '\0')
		return std::cerr << c_error << "The expectation is of 3 arguments:"
			"\ta filename,\ta string,\tand its optional replacement."
			<< c_reset << std::endl, EXIT_FAILURE;
	std::ifstream	input (argv [1]);
	if (not input) return std::cerr << c_error << "Failure while opening"
			" the input file" << c_reset << std::endl, EXIT_FAILURE;
	std::ofstream output ((std::string (argv [1]) + ".replace").c_str());
	if (not output) return std::cerr << c_error << "Failure while creating"
			" the output file" << c_reset << std::endl, EXIT_FAILURE;
	const std::string	& s1 = argv [2], & s2 = argv [3];
	for (char	c; input.get(c); /* 🖜 here */) {
		if (c != s1 [0]) { output << c; continue ; }
		const std::ifstream::pos_type	& start = input.tellg();
		const char	*s1_c = & s1 [1];
		while (*s1_c != '\0' && input.get(c) && c == *s1_c) ++ s1_c;
		if (*s1_c == '\0') output << s2;
		else if (c != *s1_c) { output << s1 [0]; input.seekg(start); }
	}
}
