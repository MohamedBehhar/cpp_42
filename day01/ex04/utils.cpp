/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:18:10 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/23 17:18:11 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"


bool	isAllSpaces(std::string str)
{
	int i = 0;
	int j = 0;
	int len = str.length();
	while (i < len)
	{
		if (isspace(str[i]) != 0)
			j++;
		i++;
	}
	return (i == j);
}


bool parseArg(char *av[])
{
	std::string str;
	int i = 1;
	while(av[i])
	{
		str = av[i];
		if (str.empty() || isAllSpaces(str))
			return (false);
		i++;
	}
	return (true);
}