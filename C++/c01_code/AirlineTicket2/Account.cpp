//
// Created by sande on 8/17/2016.
//

#include "Account.h"

Account::Account()
{
    this->amount = 0;
    this->id = -1;
    this->name = "";
}

Account::~Account()
{
    cout << "Good Byte From Account  " << endl;
}

Account::Account(int id, const std::string &name, double amount) : id(id), name(name), amount(amount)
{}

int Account::getId() const
{
    return id;
}

void Account::setId(int id)
{
    Account::id = id;
}

const std::string &Account::getName() const
{
    return name;
}

void Account::setName(const std::string &name)
{
    Account::name = name;
}

double Account::getAmount() const
{
    return amount;
}

void Account::setAmount(double amount)
{
    Account::amount = amount;
}

int Account::depositAmount(double amount)
{
    this->amount += amount;
    return 0;
}

int Account::withdrawAmount(double amount)
{
    this->amount -= amount;
    return 0;
}

int Account::generateId()
{
    this->id = 100000;
    return 0;
}

Account &Account::operator+(const Account &acc)
{
    this->amount += acc.amount;
}

bool Account::operator<(const Account &acc)
{

    std::cout << "Amount operator " << this->amount << std::endl;
   return ( this->amount <= acc.amount);

}



