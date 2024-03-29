/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:17:58 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/23 17:17:59 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
#define REPLACE_H

#include <iostream>
#include <fstream>
#define LOG std::cout
#define N std::endl

bool	isAllSpaces(std::string str);
bool	parseArg(char *av[]);


#endif