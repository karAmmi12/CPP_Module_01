/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:16:03 by kammi             #+#    #+#             */
/*   Updated: 2024/11/13 13:55:51 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error: Wrong number of arguments" << std::endl;
		return (1);
	}
	if (std::string(av[2]).empty() || std::string(av[3]).empty())
	{
		std::cerr << "Error: Empty string" << std::endl;
		return (1);
	}

	Sed	sed(av[1]);

	sed.replace(av[2], av[3]);
	return (0);
}
