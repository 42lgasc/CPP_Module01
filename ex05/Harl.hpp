/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:11:28 by lgasc             #+#    #+#             */
/*   Updated: 2024/09/25 17:48:19 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl {
public:
	enum e_level { c_none = -1, c_debug, c_info, c_warning, c_error };

	static void					complain(const std::string		& level);
	static const std::string	ft_label(const enum e_level & l)
								__attribute__ ((warn_unused_result));
	static e_level				ft_numerise(const std::string	& level)
								__attribute__ ((warn_unused_result));

private:
	static const struct s_entry { const std::string & label;
		void (& action)(void); enum e_level tag; }	map [];

	static void	debug(void);
	static void	info(void);
	static void	warning(void);
	static void	error(void);
};
#endif
