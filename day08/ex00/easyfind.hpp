/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:08:51 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/29 12:08:52 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
std::string easyfind(T &container, int toFind)
{
	if (std::find(container.begin(), container.end(), toFind) != container.end())
		return ("Element found");
	return ("Element not found");
}

#endif