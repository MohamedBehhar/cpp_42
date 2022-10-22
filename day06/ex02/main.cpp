/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 09:45:48 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/22 09:45:49 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

int main()
{
	srand(time(NULL));
	Base * base = generate();
	identify(base);
	identify(*base);
	delete base;

	return 0;
}