/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:19:54 by kammi             #+#    #+#             */
/*   Updated: 2024/11/11 16:26:46 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>

class	Sed
{
	private:
		std::string		_file;
		std::ifstream	_ifs; 

	public:
		Sed(std::string file);
		~Sed(void);

		void	replace(std::string s1, std::string s2);

};

#endif
