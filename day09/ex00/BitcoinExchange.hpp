#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange
{
private:
	int fd;
	std::map<std::string, int>data;
public:
	BitcoinExchange(/* args */);
	~BitcoinExchange();
};





#endif