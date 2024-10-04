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

//[x]
Account::Account(int initial_deposit) : _totalAmount(initial_deposit)
{
    return ;
}

//[x]
Account::~Account(void)
{
    return ;
}

void	Account::makeDeposit(int deposit)
{
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	return ;
}

int		Account::checkAmount(void) const
{
	return ;
}

void	Account::dislpayStatus(void) const
{
	return ;
}

static void	_displayTimestamp(void)
{
	return ;
}

//[x]
Account::Account(void)
{
	return ;
}
