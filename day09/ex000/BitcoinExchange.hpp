#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <list>
#include <vector>
#include <bits/stdc++.h>
#include <list>

#define BAD_INPUT "Error: bad input => ";
#define NOT_POSITIVE "Error: not a positive number.";
#define LARGE_NUM "Error: too large a number.";

class BitcoinExchange
{
private:
	char *input_file;
	char *db_file;
	typedef struct input
	{
		std::string date;
		std::string val;
		input(std::string date, std::string val);
		~input();
	}input;

	std::list<input> s_input;

	std::map<std::string, int> _db;
	std::map<std::string, std::string> _input;

public:
	BitcoinExchange();
	BitcoinExchange(char *input, const char *db);
	BitcoinExchange(BitcoinExchange const &src);
	BitcoinExchange &operator=(const BitcoinExchange &rhs);
	~BitcoinExchange();

	void fill_map(std::string buf);
	void fill_db_map(std::string buf);
	void check_input();
	std::map<std::string, int> split_db();
};

template <typename T>
void print(const T &value)
{
	std::cout << value;
}

#endif