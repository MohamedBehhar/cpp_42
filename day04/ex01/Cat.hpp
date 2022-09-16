/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:20:04 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/16 14:29:08 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat:virtual public Animal{
	private:
		Brain *catBrain;
	public:
		Cat();
		Cat(const std::string &type);
		Cat(const Cat &other);
		Cat &operator= (const Cat &rhs);
		void makeSound()const ;
		void setIdeas(std::string &idea);
		virtual~Cat();
};

#endif 