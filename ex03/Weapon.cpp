/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:39:33 by kammi             #+#    #+#             */
/*   Updated: 2024/11/11 16:15:11 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	//std::cout << "Weapon created" << std::endl;
	this->_type = type;
}

Weapon::~Weapon(void)
{
	//std::cout << "Weapon destroyed" << std::endl;
	return ;
}

std::string const	&Weapon::getType(void) const
{
	return (this->_type);
}


void	Weapon::setType(std::string type)
{
	this->_type = type;
}
