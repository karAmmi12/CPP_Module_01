/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:58:02 by kammi             #+#    #+#             */
/*   Updated: 2024/11/11 11:50:57 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie = newZombie("Foo");
	Zombie	*zombie2 = newZombie("Zombie2");
	zombie->announce();
	zombie2->announce();
	randomChump("Zombie3");
	delete zombie;
	delete zombie2;
	return (0);
}
