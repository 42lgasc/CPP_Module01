/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:10:38 by lgasc             #+#    #+#             */
/*   Updated: 2024/09/17 19:49:14 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
	std::string	type;

public:
	Weapon	(std::string type);

	const std::string	&getType(void)const __attribute__((warn_unused_result));
	void				setType(const std::string & t);
};
#endif
