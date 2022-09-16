/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:23:54 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/16 13:28:59 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal{
	public:
		WrongCat();
		WrongCat(const std::string &type);
		WrongCat(const WrongCat &other);
		WrongCat &operator= (const WrongCat &rhs);
		void makeSound()const ;
		~WrongCat();
};

#endif 