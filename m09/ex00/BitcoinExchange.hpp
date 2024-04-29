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
# define ORANGE "\033[38;5;208m"
# define RESET "\033[0m"

class BitcoinExchange
{
private:
    const std::string dataPath = "data.csv";
    std::ifstream inFile;
    std::ifstream dataFile;
    std::map<std::string, double> data;

    void processData();
    std::string parseInput(std::string & line);
    std::string parseDate(std::string & date);
    double parseNumber(std::string & Number);
    std::string calculateBitcoin(std::string & line, int n);

    bool isLeapYear(int year);
    bool isValidDate(int year, int month, int day);
    void closeFiles();

    BitcoinExchange();
public:
    void processInput();

    BitcoinExchange(char *input);
    ~BitcoinExchange();
};

void BitcoinExchange::processInput(){
    if (!data.empty()){
        std::string line;
        getline(dataFile, line);
        while(getline(inFile, line)){
            std::cout << line << BLUE << " => " << parseInput(line) << RESET << std::endl;
        }
    }
}

std::string BitcoinExchange::parseInput(std::string & line){
    std::string date;
    std::string number;
    double      n = -1;
    std::ostringstream result;
    size_t separator = line.find(' ');
    if (separator != std::string::npos 
        && line[separator + 1] && line[separator + 1] == '|' 
        && line[separator + 2] && line[separator + 2] == ' ') {
        date = line.substr(0, separator);
        number = line.substr(separator + 3);
        if ((date = parseDate(date)) != "")
            result << ORANGE << date;
        else if ((n = parseNumber(number)) == -1)
            result << ORANGE << "Wrong number input";
        else
            result << GREEN << calculateBitcoin(line, n);
    } else {
        result << RED << "Error: Bad input";
    }
    return (result.str());
}

bool BitcoinExchange::isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true; // Divisible by 400, leap year
            }
            return false; // Divisible by 100 but not by 400, not a leap year
        }
        return true; // Divisible by 4 but not by 100, leap year
    }
    return false; // Not divisible by 4, not a leap year
}

bool BitcoinExchange::isValidDate(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1)
        return false;
    static const int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int days = daysInMonth[month - 1];
    if (month == 2 && isLeapYear(year))
        days = 29;
    return (day <= days);
}


std::string BitcoinExchange::parseDate(std::string &date){
    std::istringstream iss(date);
    int day = 0;
    int month = 0;
    int year = 0;
    char delimeter;
    iss >> year >> delimeter;
    if (delimeter != '-')  
        return ("Error: Bad date format");
    iss >> month >> delimeter >> day;
    if (delimeter != '-')  
        return ("Error: Bad date format");
    if (!isValidDate(day, month, year))
        return ("Error: Wrong date input");
    return ("");
}

double BitcoinExchange::parseNumber(std::string & Number){
    std::istringstream iss(Number);
    double n = -1;
    iss >> n;
    if (iss.fail() || !iss.eof() || n < 0)
        return (-1);
    return (n);
}

BitcoinExchange::BitcoinExchange(char *input){
    try{
        std::string filePath(input);
        inFile.open(filePath.c_str());
        if (!inFile.is_open())
            throw std::runtime_error("Failed to open input file *" + filePath + "*");
        dataFile.open(dataPath.c_str());
        if (!dataFile.is_open())
            throw std::runtime_error("Failed to open data file *" + dataPath + "*");
        processData();
    }
    catch(const std::exception& e){
        closeFiles();
        std::cerr << RED << e.what() << RESET << std::endl;
    }
}

void BitcoinExchange::processData(){
    std::string line;
    std::string key;
    std::string value;
    getline(dataFile, line);
    while (getline(dataFile, line)){
        size_t separator = line.find(',');
        if (separator != std::string::npos) {
            key = line.substr(0, separator);
            value = line.substr(separator + 1);
            std::istringstream iss(value);
            double valueD;
            iss >> valueD;
            data[key] = valueD;
        }
    }
    dataFile.close();
}

void BitcoinExchange::closeFiles(){
    if (inFile.is_open())
        inFile.close();
    if (dataFile.is_open())
        dataFile.close();
}

BitcoinExchange::~BitcoinExchange(){
    closeFiles();
}

BitcoinExchange::BitcoinExchange(){}

#endif