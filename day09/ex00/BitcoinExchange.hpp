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
#define NOT_POSITIVE "Error: not a positive number.\n";
#define LARGE_NUM "Error: too large a number.";

class BitcoinExchange
{
private:

public:
	std::map<std::string, float> _db;
	BitcoinExchange();
	BitcoinExchange(char *input, const char *db);
	BitcoinExchange(BitcoinExchange const &src);
	BitcoinExchange &operator=(const BitcoinExchange &rhs);
	~BitcoinExchange();

	void check_each_line(std::string buf);
	void fill_db_map(std::string buf);
	void check_input(std::string date, std::string val);
	bool find_val(std::string date, std::string val ,float num);
	std::map<std::string, int> split_db();
	void found_close_date(std::string date);
	void print_and_exit(std::string str);
	std::string removeWhiteSpace(std::string input);
	void splitDate(const std::string &str, const std::string &sep, std::string arr[]);
	bool check_date_val(std::string arr[], std::string date, std::string val);
};

template <typename T>
void print(const T &value)
{
	std::cout << value;
}

#endif