/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:30:53 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/22 12:59:28 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T> void iter(T *arr, int len, void (*func)(T&))
{
	if (len < 0)
		return;
	for (int i = 0; i < len; i++)
		func(arr[i]);
}

#endif