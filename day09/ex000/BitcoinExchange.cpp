#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::cout << "BitcoinExchange constructor called" << std::endl;
}

void splitString(std::string str, std::string sep, std::string arr[])
{
	size_t pos = str.find(sep);

	if (pos == std::string::npos)
	{
		arr[0] = str;
		arr[1] = "";
	}
	else
	{
		arr[0] = str.substr(0, pos);
		arr[1] = str.substr(pos + sep.length());
	}
}

void print_and_exit(std::string str)
{
	print(str);
	exit(EXIT_FAILURE);
}

std::string removeWhiteSpace(std::string input)
{
	if (input == "")
		return "";
	std::string output = "";

	for (int i = 0; i < input.length(); i++)
	{
		if (!isspace(input[i]))
		{
			output += input[i];
		}
	}

	return output;
}

void BitcoinExchange::fill_map(std::string buf)
{
	if (buf == "date | value")
		return;
	std::string arr[2];
	splitString(buf, "|", arr);
	s_input.push_back(input(arr[0], arr[1]));
	_input[removeWhiteSpace(arr[0])] = (arr[1]);
}

// input //
BitcoinExchange::input::input(std::string date, std::string val)
{
	_date = date;
	_val = val;
}
BitcoinExchange::input::~input()
{
}

void BitcoinExchange::fill_db_map(std::string buf)
{
	std::string arr[2];
	splitString(buf, ",", arr);

	_db[removeWhiteSpace((arr[0]))] = atol(arr[1].c_str());
}

void splitDate(const std::string &str, const std::string &sep, std::string arr[])
{
	std::stringstream ss(str);
	std::string token;
	int i = 0;
	while (getline(ss, token, sep[0]))
	{
		arr[i] = token;
		i++;
	}
}

bool print_in_error(std::string str, bool flag)
{
	print(str);
	return flag;
}

bool bad_input_msg(std::string date)
{
	std::string msg = "";
	msg += BAD_INPUT;
	msg += date + '\n';
	return print_in_error(msg, true);
}

bool check_date(std::string arr[], std::string date)
{
	std::string msg = "";
	// if (arr[0] == "" || arr[1] == "" || arr[2] == "")
	// 	return bad_input_msg(date);
	long year, mounth, day;
	year = atol(arr[0].c_str());
	mounth = atol(arr[1].c_str());
	day = atol(arr[2].c_str());
	if (year == 2009 && mounth == 1 && day < 2)
		print_in_error("Error: Date not found on data base\n", true);
	if (year == 2022 && mounth == 3 && day > 29)
		print_in_error("Error: Date not found on data base\n", true);
	if (year < 2009 || mounth < 0 || day < 0)
		return bad_input_msg(date);
	// sana kabissa
	if (mounth > 12)
		return bad_input_msg(date);
	if (mounth == 2)
		if (year % 4 != 0 && day > 28)
			return bad_input_msg(date);
	if (mounth % 2 != 0 && mounth != 8)
		if (day > 31)
			return bad_input_msg(date);
	return false;
}

void find_val(std::string )

void BitcoinExchange::check_input()
{
	// std::map<std::string, std::string>::iterator it = _input.begin();
	std::list<BitcoinExchange::input>::iterator it = s_input.begin();

	while (it != s_input.end())
	{
		std::string arr[3];
		splitDate(it->_date, "-", arr);
		// check_date(arr, it->_date);
		// for (size_t i = 0; i < 3; i++)
		// {
		// 	print(arr[0]);
		// 	print(" - ");
		// }

		if (check_date(arr, it->_date))
			it++;
		/// find date and value
		it++;
	}
}

BitcoinExchange::BitcoinExchange(char *in, const char *db)
{
	std::ifstream file(in);
	if (file.is_open() == false)
		print_and_exit("input file error");
	if (file.peek() == EOF)
		print_and_exit("input file is empty");
	std::string buf;
	while (getline(file, buf, '\n'))
		fill_map(buf);

	// fill db info
	std::ifstream db_file(db);
	if (db_file.is_open() == false)
		print_and_exit("db_file error");
	if (db_file.peek() == EOF)
		print_and_exit("db_file is empty");
	std::string db_buf;
	while (getline(db_file, db_buf, '\n'))
		fill_db_map(db_buf);
	check_input();

	// std::list<BitcoinExchange::input>::iterator it = s_input.begin();

	// while (it != s_input.end())
	// {
	// 	std::cout << "key:1 |" << it->_date << "|value: " << it->_val << std::endl;
	// 	it++;
	// }
	// std::map<std::string, int>::iterator itr = _db.begin();
	// while (itr != _db.end())
	// {
	// 	std::cout << "key: " << itr->first << "value: " << itr->second << std::endl;
	// 	itr++;
	// }
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
	{
	}
	return (*this);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	std::cout << "BitcoinExchange Copy constructor called" << '\n';
	*this = src;
}

BitcoinExchange::~BitcoinExchange()
{
}
