#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals= 0;

Account::Account( int initial_deposit ):_accountIndex(_nbAccounts),
	_amount(initial_deposit) ,_nbDeposits(0), _nbWithdrawals(0) {
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";" << "created" << std::endl;
};

Account::~Account( void ){};

int	Account::getNbAccounts( void ) { return (_nbAccounts);};
int	Account::getTotalAmount( void ) { return (_totalAmount);};
int	Account::getNbDeposits( void ) { return (_totalNbDeposits);};
int	Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals);};

void Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << ";";
	std::cout << std::endl;
};

void Account::_displayTimestamp( void ){
	std::time_t	time_stmp;
	struct tm	*t_stmp;

	std::time(&time_stmp);
	t_stmp= localtime(&time_stmp);
	std::cout << "[";
	std::cout << t_stmp->tm_year + 1900;
	std::cout << std::setw(2) << std::setfill('0') << t_stmp->tm_mon + 1;
	std::cout << std::setw(2) << std::setfill('0') << t_stmp->tm_mday << "_";
	std::cout << std::setw(2) << std::setfill('0') << t_stmp->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << t_stmp->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << t_stmp->tm_sec;
	std::cout << "] ";
};

void Account::makeDeposit( int deposit ){
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits; 
	std::cout << std::endl;
};

bool	Account::makeWithdrawal( int withdrawal ){
	this->_amount -= withdrawal;
	return(1);
};

int		Account::checkAmount( void ) const{
	if (_amount >= 0)
		return(0);
	return (1);
};

void	Account::displayStatus( void ) const{
	return ;
};
