/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:19:57 by kammi             #+#    #+#             */
/*   Updated: 2024/11/13 16:38:57 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string file) : _file(file)
{
	this->_file = file;
	this->_ifs.open(file.c_str());
	if (!this->_ifs.is_open())
	{
		std::cerr << "Error: " << file << " does not exist or can't be opened" << std::endl;
		return ;
	}
	if (this->_file.empty())
	{
		std::cerr << "Error: Empty file" << std::endl;
		return ;
	}

}

Sed::~Sed(void)
{
	if (this->_ifs.is_open())
		this->_ifs.close();
	return ;
}

void	Sed::replace(std::string s1, std::string s2)
{
	std::string		line;
	std::ofstream	ofs;
	size_t			pos;

	if (!this->_ifs.is_open())
	{
		std::cerr << "Error: File is not open" << std::endl;
		return ;
	}

	if (std::getline(this->_ifs, line, '\0'))
	{
		ofs.open((this->_file + ".replace").c_str());
		if (!ofs.is_open())
		{
			std::cerr << "Error: Can't create file or permission denied" << std::endl;
			return ;
		}
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1, pos + s2.length());
		}
		ofs << line << std::endl;
		ofs.close();
	}
	else
	{
		std::cerr << "Error: File is empty" << std::endl;
		return ;
	}
}
