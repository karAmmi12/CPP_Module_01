/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:29:51 by kammi             #+#    #+#             */
/*   Updated: 2024/11/13 13:18:52 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		std::cout << "[ " << levels[i] << " ]" << std::endl;
		harl.complain(levels[i]);
		std::cout << std::endl;
	}
	std::cout << "[ " << "Invalid" << " ]" << std::endl;
	harl.complain("Invalid");
	


	return (0);
}
