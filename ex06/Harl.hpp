/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:12:42 by kammi             #+#    #+#             */
/*   Updated: 2024/11/11 17:13:12 by kammi            ###   ########.fr       */
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
