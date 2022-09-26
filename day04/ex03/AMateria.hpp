/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:18:34 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/26 18:33:43 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>


class AMateria
{
protected:
	std::string _type;
public:
	AMateria(/* args */);
	AMateria(const std::string& type);
	AMateria(const AMateria& other);
	AMateria &operator +(const AMateria& rhs);
	~AMateria();
};


#endif 