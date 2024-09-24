/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:14:06 by lgasc             #+#    #+#             */
/*   Updated: 2024/09/17 19:51:32 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB {
	const std::string	name;
	const Weapon		*w;

public:
	HumanB	(const std::string & name);

	void	setWeapon(const Weapon & w);

	void	attack(void) const;
};
#endif
