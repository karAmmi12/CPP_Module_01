/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:09:03 by kammi             #+#    #+#             */
/*   Updated: 2024/11/13 16:10:31 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of the string: " << &str << std::endl;
	std::cout << "Address stored in the pointer: " << stringPTR << std::endl;
	std::cout << "Address stored in the reference: " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "The value of the string: " << str << std::endl;
	std::cout << "The value pointed by the ointer: " << *stringPTR << std::endl;
	std::cout << "The value pointed by the reference: " << stringREF << std::endl;

	return (0);

}
