/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:07:20 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/19 19:50:22 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(/* args */)
{
}

File::~File()
{
}

void	File::readFile(std::string Filename)
{
	std::ifstream file(Filename.c_str());
	if (!file)
	{
		std::cout << "Error: File not found" << std::endl;
		return ;
	}

	std::string line;
	while (std::getline(file, line))
		std::cout << line << std::endl;
	file.close();
}