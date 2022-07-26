/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:20:59 by mbehhar           #+#    #+#             */
/*   Updated: 2022/07/26 18:46:11 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H
#include "Contact.hpp"
#include <string.h>


class PhoneBook {
private:
	Contact contacts[8];
	int		id;
public:
	PhoneBook();
	void	Add(std::string *info, int id);
	void	SEARCH();
};


#endif