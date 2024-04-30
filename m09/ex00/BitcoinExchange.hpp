#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <fstream>
# include <sstream>
# include <exception>
# include <map>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define BLUE "\033[34m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"

class BitcoinExchange
{
private:
    std::ifstream inFile;
    std::ifstream dataFile;
    std::map<std::string, double> data;

    void processData();
    std::string parseInput(std::string & line);
    std::string parseDate(std::string & date);
    double parseNumber(std::string & Number);
    std::string calculateBitcoin(std::string & date, double n);

    bool isLeapYear(int year);
    bool isValidDate(int year, int month, int day);
    void closeFiles();

    BitcoinExchange();
    BitcoinExchange(BitcoinExchange const& copy);
    BitcoinExchange& operator=(BitcoinExchange const& copy);
public:
    void processInput();

    BitcoinExchange(char *input);
    ~BitcoinExchange();
};

#endif