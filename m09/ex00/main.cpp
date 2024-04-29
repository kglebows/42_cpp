#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]){
    if (argc != 2){
        std::cout << RED << "Wrong Input! " << BLUE << "Use: ./btc <Path_to_a_file.txt>" << RESET << std::endl;
        return 1;
    }
    BitcoinExchange btc(argv[1]);
    btc.processInput();
    return 0;
}