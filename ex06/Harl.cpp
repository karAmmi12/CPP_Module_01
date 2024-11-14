/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:12:36 by kammi             #+#    #+#             */
/*   Updated: 2024/11/13 16:39:30 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	//std::cout << "Harl created" << std::endl;
}

Harl::~Harl(void)
{
	//std::cout << "Harl destroyed" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			harl_level = -1;

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			harl_level = i;
			break ;
		}
	}

	switch (harl_level)
	{
		case 0:
			_debug();
		case 1:
			_info();
		case 2:
			_warning();
		case 3:
			_error();
			break ;
		default:
			if (level.size())
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}


}

void Harl::_debug( void ){
	std::cout << "[ DEBUG ]I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !\n" << std::endl;
}

void Harl::_info( void ){
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n" << std::endl;
}

void Harl::_warning( void ){
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::_error( void ){
	std::cout << "[ ERROR ]\nThis is unacceptable ! I want to speak to the manager now.\n" << std::endl;
}
