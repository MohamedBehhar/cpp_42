/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:20:04 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/26 14:30:30 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat:virtual public Animal{
	public:
		Cat();
		Cat(const std::string &type);
		Cat(const Cat &other);
		Cat &operator= (const Cat &rhs);
		~Cat();
		void makeSound()const ;
};

#endif 