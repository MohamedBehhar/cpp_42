/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:44:28 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/25 14:17:55 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include "Zombie.h"

class Zombie{
	private:
		std::string _name;
	public:
		Zombie();
		Zombie(std::string name);
		void setName(std::string name);
		~Zombie();
		void annouce(void);
};

#endif