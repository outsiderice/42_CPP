#include "Account.hpp"

//	PUBLIC

//		getters
static int	Account::getNbAccounts( void )
{
	return (this->_nbAccounts);
}

static int	Account::getTotalAmount( void )
{
	return (this->_toalAmount);
}

static int	Account::getNbDeposits( void )
{
	return (this->_nbDeposits);
}
	
static int	Account::getNbWithdrawals( void )
{
	return (this->_nbWithdrawals);
}

//		?display all attributes?
static void	Account::displayAccountsInfos( void )
{
}

//		constructors & destructors
Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
}

Account::~Account( void )
{
}

//		changes to amount
void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (_amount > _amount - withdrawal)
	{
		this->_amount = _amount - withdrawal;
		return  (true);
	}
	else
		return (false);
}

//		displays _amount
int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

//		?displays what?
void	Account::displayStatus( void ) const
{}

//	PRIVATE

//		displays timestamp
static void	Account::_displayTimestamp( void )
{}
