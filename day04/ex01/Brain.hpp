/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:45:38 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/16 14:16:24 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain{
	protected:
		std::string _ideas[100];
	public:
		Brain();
		Brain(std::string &ideas);
		Brain(const Brain& other);
		Brain &operator = (const Brain& rhs);
		~Brain();
		const std::string getIdea(int i);
};

#endif