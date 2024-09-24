/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:47:16 by lgasc             #+#    #+#             */
/*   Updated: 2024/09/17 18:03:05 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	const std::string			shout		= "HI THIS IS BRAIN";
	const std::string *const	stringPTR	= & shout;
	const std::string			& stringREF	= shout;

	std::cout
		<< & shout	<< '\t' << & stringPTR	<< '\t' << & stringREF << '\n'
		<< shout	<< '\t' << *stringPTR	<< '\t' << stringREF
		<< std::endl;
}
