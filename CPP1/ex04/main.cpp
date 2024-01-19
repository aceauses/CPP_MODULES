/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:07:24 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/19 22:57:24 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace <filename> <original> <replace>" << std::endl;
		return (1);
	}
	File file;
	file.replace(argv[1], argv[2], argv[3]);
	return (0);
}