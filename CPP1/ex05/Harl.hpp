/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:01:10 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/21 14:21:53 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <fstream>
# include <string>

class Harl
{
private:
	/* data */
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	Harl(/* args */);
	~Harl();
	void	complain(std::string level);
};
typedef void (Harl::*fptr)(void);
#endif