/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Acount.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:41:35 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/02 11:56:06 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>


int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalAmount = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
}
Account::~Account( void )
{
    Account::_displayTimestamp();
    std::cout << "index" << this->_accountIndex << ";";
    std::cout << "amount" << this->_amount << ";";
    std::cout << "closed" << std::endl;

    Account::_nbAccounts -= 1;
    Account::_totalAmount -= this->_amount;
}

int Account::getNbAccounts( void )
{
    return(Account::_nbAccounts);
}

int Account::getTotalAmount( void )
{
    return(Account::_totalAmount);
}

int Account::getNbDeposits( void )
{
    return(Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
    return(Account::_totalNbWithdrawals);
}

Account::Account(int initial_deposit)
{
    Account::_displayTimestamp();
    std::cout << "index:" << Account::_nbAccounts << ";";
    std::cout << "amount" << initial_deposit << ";";
    std::cout << "created" << std::endl;

    this->_accountIndex = Account::_nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;

    Account::_nbAccounts ++;
    Account::_totalAmount += initial_deposit;
}

void	Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";

    this->_amount += deposit;
    Account::_totalNbDeposits += 1;
    this->_nbDeposits += 1;
    Account::_totalAmount += deposit;
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl; 
}
void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount" << this->_amount << ";";
    std::cout << "withdrawal:";

    if (withdrawal > this->_amount)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals += 1;
    this->_totalNbWithdrawals += 1;
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_withdrawls:" << this->_nbWithdrawals << std::endl;
    return (true); 
}

int		Account::checkAmount( void ) const
{
    return (this->_amount);
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "total:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
    std::time_t now = std::time(NULL);
    std::tm *tm;
    tm = std::localtime(&now);
    std::cout << "[";
    std::cout << 1900 + tm->tm_year;
    std::cout << 1 + tm->tm_mon;
    std::cout << tm->tm_mday;
    std::cout << "_";
    std::cout << tm->tm_hour;
    std::cout << tm->tm_min;
    std::cout << tm->tm_sec;
    std::cout << "]";
}
