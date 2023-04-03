#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
		_db = rhs._db;
	return (*this);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange()
{
}


BitcoinExchange::BitcoinExchange(char *in, const char *db)
{
	// check input file 
	std::ifstream file(in);
	if (file.is_open() == false)
		print_and_exit("Error: could not open file.");
	if (file.peek() == EOF)
		print_and_exit("Error: input file is empty");

	// fill db info
	std::ifstream db_file(db);
	if (db_file.is_open() == false)
		print_and_exit("Error: db_file error");
	if (db_file.peek() == EOF)
		print_and_exit("Error: db_file is empty");
	std::string db_buf;
	while (getline(db_file, db_buf, '\n'))
		fill_db_map(db_buf);

	// read input file and prse each string
	std::string buf;
	while (getline(file, buf, '\n'))
		check_each_line(buf);
}


void splitString(std::string str, std::string sep, std::string arr[])
{
	int count = 0;
	for (size_t i = 0; str[i]; i++)
	{
		if (str[i] == sep[0])
			count++;
	}
	if (count != 1)
	{
		arr[0] = str;
		arr[1] = "";
		return;
	}
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

void BitcoinExchange::print_and_exit(std::string str)
{
	print(str);
	exit(EXIT_FAILURE);
}

std::string BitcoinExchange::removeWhiteSpace(std::string input)
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

void BitcoinExchange::check_each_line(std::string buf)
{
	if (removeWhiteSpace(buf) == "date|value")
		return;
	std::string arr[2];
	splitString(buf, "|", arr);
	return check_input(removeWhiteSpace(arr[0]), arr[1]);
}


void BitcoinExchange::fill_db_map(std::string buf)
{
	std::string arr[2];
	splitString(buf, ",", arr);
	float val = 0;
	if (arr[1] != "exchange_rate")
		val = std::stof(arr[1]);

	_db[removeWhiteSpace((arr[0]))] = val;
}

void BitcoinExchange::splitDate(const std::string &str, const std::string &sep, std::string arr[])
{
	int count = 0;
	for (size_t i = 0; str[i] != '\0' ; i++)
	{
		if (str[i] == sep[0])
			count++;
	}
	if (count != 2)
	{
		arr[0] = "";
		arr[1] = "";
		arr[2] = "";
		return ;
	}
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

bool is_number(std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

bool BitcoinExchange::check_date_val(std::string arr[], std::string date, std::string val)
{
	std::string msg = "";
	if (arr[0] == "" || arr[1] == "" || arr[2] == "")
		return bad_input_msg(date);
	if (!is_number(arr[0]) || !is_number(arr[1]) || !is_number(arr[2]))
		return bad_input_msg(date);
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
	if (mounth % 2 == 0 && mounth != 2 && mounth != 8)
		if (day > 30)
			return bad_input_msg(date);
	return false;
}


bool BitcoinExchange::find_val(std::string date, std::string val, float num)
{

	std::map<std::string, float>::iterator it = _db.find(date);
	if (it != _db.end())
	{
		print(date + " => " + val + " = ");
		print(num * it->second);
		print("\n");
	}
	else
	{
		std::map<std::string, float>::iterator it = _db.upper_bound(date);
		it--;
		print(date + " => " + val + " = ");
		print(num * it->second);
		print("\n");
	}
	return false;
}

void BitcoinExchange::check_input(std::string date, std::string val)
{
	float num = 0;

	if (val != "")
	{
		num = std::stof(val);
		if (num < 0)
		{
			print("Error: not a positive number.\n");
			return;
		}
		if (num > 1000)
		{
			print("Error: too large a number.\n");
			return;
		}
	}
	std::string arr[3];
	splitDate(date, "-", arr);
	if (check_date_val(arr, date, val))
		return;
	if (find_val(date, val, num))
		return;
}



