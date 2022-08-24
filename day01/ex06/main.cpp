/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:41:52 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/24 14:04:40 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		LOG << "Invalid number of parametres" << N;
		return (1);
	}

	Harl harl;
	harl.complain(av[1]);
	return (0);
}