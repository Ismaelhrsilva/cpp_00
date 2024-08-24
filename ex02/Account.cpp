#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals= 0;

Account::Account( int initial_deposit ):_accountIndex(_nbAccounts),
	_amount(initial_deposit) ,_nbDeposits(0), _nbWithdrawals(0) {
	_nbAccounts++;
	_totalAmount += initial_deposit;
};

Account::~Account( void ){};

int	Account::getNbAccounts( void ) { return (_nbAccounts);};
int	Account::getTotalAmount( void ) { return (_totalAmount);};
int	Account::getNbDeposits( void ) { return (_totalNbDeposits);};
int	Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals);};

void Account::displayAccountsInfos( void ){};
void Account::_displayTimestamp( void ){};

void Account::makeDeposit( int deposit ){
	this->_amount += deposit;
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
