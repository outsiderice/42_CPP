#include "Account.hpp"

//[x]
static int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

//[x]
static int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

//[x]
static int	Account::getNbDeposits(void)
{
	return (_nbDeposits);
}

//[x]
static int	Account::getNbWithdrawals(void)
{
	return (_nbWithdrawals);
}

static void	Account::displayAccountsInfos(void)
{
	return ;
}

//[x] ?
Account::Account(int initial_deposit) : _totalAmount(initial_deposit)
{
	_nbAccounts += 1;
	_totalNbDeposits = 1;
	_totalNbWithdrawals = 0;
	_nbDeposits = 1;
	_nbWithdrawals = 0;
    return ;
}

//[x]
Account::~Account(void)
{
    return ;
}

void	Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	_amount += deposit;
	_nbDeposits += 1;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > _amount)
		return (false);
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += 1;
	_amount -= withdrawal;
	_nbWithdrawals += 1;
	return (true);
}

int		Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::dislpayStatus(void) const
{
	return ;
}

static void	_displayTimestamp(void)
{
	return ;
}

//[x] ?
Account::Account(void)
{
	_nbAccounts += 1;
	_totalAmount = 0;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	return ;
}
