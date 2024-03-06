/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:39:21 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/06 14:31:46 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

/*static*/
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/*get*/
int	Account::getNbAccounts( void ) {
	return(_nbAccounts);
}
int	Account::getTotalAmount( void ) {
	return(_totalAmount);
}
int	Account::getNbDeposits( void ) {
	return(_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ) {
	return(_totalNbWithdrawals);
}
int	Account::checkAmount( void ) const{
	return(_amount);
}

/*display*/
void	Account::_displayTimestamp( void ) {
	std::time_t		*ptr = NULL;
	std::time_t		time = std::time(ptr);
	std::tm			*now = std::localtime(&time);
	char			str[20];
	std::strftime(str, sizeof(str), "[%Y%m%d_%H%M%S]", now);
	std::cout << str << " ";
}
void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout	<< "accounts:" << getNbAccounts() << ";"
				<< "total:" << getTotalAmount() << ";"
				<< "deposits:" << getNbDeposits() << ";"
				<< "withdrawals:" << getNbWithdrawals()
				<< std::endl;
}
void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "deposits:" << _nbDeposits << ";"
				<< "withdrawals:" << _nbWithdrawals
				<< std::endl;
}

/*Constructor/Destructor*/
Account::Account( int initial_deposit ) {
	_accountIndex = getNbAccounts();
	_amount = initial_deposit;
	Account::_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "created" << std::endl;
	_totalAmount += _amount;
	_nbAccounts++;
}
Account::~Account( void ) {
	Account::_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "closed" << std::endl;
}
Account::Account( void ) {
	_accountIndex = getNbAccounts();
	_amount = 0;
	Account::_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "created" << std::endl;
	_nbAccounts++;
}

/*operations*/
void	Account::makeDeposit( int deposit ){
	Account::_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "p_amount:" << _amount << ";"
				<< "deposit:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout	<< "amount:" << _amount << ";"
				<< "nb_deposits:" << _nbDeposits
				<< std::endl;
}
bool	Account::makeWithdrawal( int withdrawal ){
	Account::_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "p_amount:" << _amount << ";"
				<< "withdrawal:";
	if (withdrawal > _amount) {
		std::cout << "refused" << std::endl;
		return (false);
	} else {
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout	<< withdrawal << ";"
					<< "amount:" << _amount << ";"
					<< "nb_withdrawals:" << _nbWithdrawals
					<< std::endl;
		return (true);
	}
}
