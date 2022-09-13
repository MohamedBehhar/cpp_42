/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:43:42 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/13 16:47:53 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CPP
#define SCAVTRAP_CPP
#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap{
	private:
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &other);
		ScavTrap &operator= (const ScavTrap &rhs);
		~ScavTrap();
		void guardGate();
};

#endif