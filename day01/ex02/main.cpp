/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:18:37 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/26 12:29:19 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
	//declaration
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	//printin memories adresses
	std::cout << "The memory address of the string:	" << &str << std::endl;
	std::cout << "The memory address of the stringPTR:	" <<  stringPTR<< std::endl;
	std::cout << "The memory address of the stringREF:	" << &stringREF << std::endl;
	
	//printin memories adresses
	std::cout << "The value of the string variable:	" << str << std::endl;
	std::cout << "The value pointed to by stringPTR:	" <<  *stringPTR<< std::endl;
	std::cout << "The value pointed to by stringREF:	" << stringREF << std::endl;	
	return (0);
}