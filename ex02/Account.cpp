#include "Account.h"

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals= 0;

Account::Account( int initial_deposit ):_accountIndex(_accountIndex),
	_amount(initial_deposit) ,_nbDeposits(0), _nbWithdrawals(0) {
	_accountIndex++;
	_totalAmount += initial_deposit;
};

Account::~Account( void ){};

int	Account::getNbAccounts( void ) { return (_nbAccounts);};
int	Account::getTotalAmount( void ) { return (_totalAmount);};
int	Account::getNbDeposits( void ) { return (_totalNbDeposits);};
int	Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals);};
