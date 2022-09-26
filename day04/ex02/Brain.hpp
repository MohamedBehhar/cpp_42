/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:45:38 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/26 18:31:17 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(std::string &ideas);
		Brain(const Brain& other);
		Brain &operator = (const Brain& rhs);
		~Brain();
		const std::string getIdea(int i);
		void setIdeas(std::string idea);
};

#endif