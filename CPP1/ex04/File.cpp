/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:07:20 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/19 23:08:40 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(/* args */)
{
}

File::~File()
{
}

void	File::replace(std::string Filename, std::string s1, std::string s2)
{
	std::ifstream file(Filename.c_str());
	if (!file)
	{
		std::cout << "Error: File not found" << std::endl;
		return ;
	}
	if (s1.empty() || s2.empty())
	{
		std::cout << "Error: Please do not provide empty parameters" << std::endl;
		return ;
	}
	std::string line;
	std::string newFile = Filename + ".replace";
	std::ofstream newFile2(newFile.c_str());
	while (std::getline(file, line))
	{
		while (line.find(s1) != std::string::npos)
			line.replace(line.find(s1), s1.length(), s2);
		newFile2 << line << std::endl;
	}
	file.close();
	newFile2.close();
}