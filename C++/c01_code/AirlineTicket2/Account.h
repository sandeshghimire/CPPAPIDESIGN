//
// Created by sande on 8/17/2016.
//

#ifndef PROJECT_ACCOUNT_H
#define PROJECT_ACCOUNT_H


#include <string>
#include <iostream>


using std::endl;
using std::cout;

class Account
{
private:
public:
    int getId() const;

    void setId(int id);

    const std::string &getName() const;

    void setName(const std::string &name);

private:
    int id;
    std::string name;
    double amount;
public:
    double getAmount() const;
    void setAmount(double amount);

    int depositAmount(double amount);
    int withdrawAmount(double amount);

     Account & operator + (const Account &acc);

    bool operator < (const Account &acc);




public:
    Account();
    virtual ~Account();

    Account(int id, const std::string &name, double amount );

    int generateId();
};


#endif //PROJECT_ACCOUNT_H
