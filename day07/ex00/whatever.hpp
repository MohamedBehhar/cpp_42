/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:30:37 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/22 14:47:18 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T> void swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}


template <typename T> T min(T a, T b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T> T max(T a, T b)
{
	if (a > b)
		return a;
	return b;
}

#endif