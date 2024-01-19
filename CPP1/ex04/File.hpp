/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:07:18 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/19 22:57:06 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

# include <iostream>
# include <fstream>
# include <string>

class File
{
private:
	/* data */
public:
	File(/* args */);
	~File();
	void	replace(std::string filename, std::string s1, std::string s2);
};

#endif