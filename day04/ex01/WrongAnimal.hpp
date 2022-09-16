/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:21:50 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/16 13:28:29 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal(/* args */);
	WrongAnimal(const std::string &type);
	WrongAnimal (const WrongAnimal &other);
	WrongAnimal &operator= (const WrongAnimal &rhs);
	std::string getType()const;
	virtual ~WrongAnimal();
	virtual void makeSound()const;
};

#endif
