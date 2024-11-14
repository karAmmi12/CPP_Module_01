/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:29:47 by kammi             #+#    #+#             */
/*   Updated: 2024/10/16 18:32:38 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
		void		_debug(void);
		void		_info(void);
		void		_warning(void);
		void		_error(void);

	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);
};

#endif
