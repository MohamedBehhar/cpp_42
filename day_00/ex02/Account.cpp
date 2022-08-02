/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:21:03 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/02 19:14:07 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

//CONSTRUCTOR
Account::Account(int initial_deposit )
{
	static int i;
	std::cout << "constructor called " << initial_deposit <<  " " << i++ << '\n';
	// makeDeposit(initial_deposit);
}

// DESTRUCTOR
Account::~Account(){
	std::cout << "destructor called " << '\n';
};


int	Account::getNbAccounts( void ){
	std::cout << "getNbAccounts" << '\n';
	return 0;
};
int	Account::getTotalAmount( void ){
	std::cout << "getTotalAmount" << '\n';
	return 0;
};
int	Account::getNbDeposits( void ){
	std::cout << "getNbDeposits" << '\n';
	return 0;
};
int	Account::getNbWithdrawals( void ){
	std::cout << "getNbWithdrawals" << '\n';
	return 0;
};
void	Account::displayAccountsInfos( void ){
	std::cout << "displayAccountsInfos" << '\n';
};

void	Account::makeDeposit( int deposit ){
	std::cout << "deposit" << deposit << '\n';
};

bool	Account::makeWithdrawal( int withdrawal ){
	std::cout << "withdrawl" << withdrawal << '\n';
	return (true);
};

int		Account::checkAmount( void ) const{
	std::cout << "checkAmount" << '\n';
	return (1);
};

void	Account::displayStatus( void ) const{
	std::cout << "displayStatus" << '\n';
};

