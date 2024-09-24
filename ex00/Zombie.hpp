/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:02:56 by lgasc             #+#    #+#             */
/*   Updated: 2024/09/17 17:02:50 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
	std::string	name;

	Zombie		(const std::string name = "Wraith"): name(name) {}

public:
	~ Zombie	(void);

	static Zombie	*newZombie(std::string name)
					__attribute__ ((warn_unused_result));
	static void		randomChump(std::string name);
	static Zombie	*zombieHorde(int n, std::string name)
					__attribute__ ((warn_unused_result));

	void	announce(void) const;
};
#endif
