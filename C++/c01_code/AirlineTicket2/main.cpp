#include <iostream>
#include "Account.h"

int main(int argc, char **argv)
{
    Account *husbandAccount = new Account(1000, "James", 5000);
    Account *wifeAccount = new Account(1001, "Jane", 1000);

    Account *jointAccount = new Account();


    std::cout << "++++++++++++++++++++++++++++++++++" << std::endl;
    std::cout << "Id " << husbandAccount->getId() << std::endl;
    std::cout << "Name " << husbandAccount->getName() << std::endl;
    std::cout << "Amount " << husbandAccount->getAmount() << std::endl;

    //husbandAccount->depositAmount(1);
    std::cout << "++++++++++++++++++++++++++++++++++" << std::endl;

    std::cout << "Id " << husbandAccount->getId() << std::endl;
    std::cout << "Name " << husbandAccount->getName() << std::endl;
    std::cout << "Amount " << husbandAccount->getAmount() << std::endl;

    std::cout << "++++++++++++++++++++++++++++++++++" << std::endl;

    //husbandAccount->withdrawAmount(1);


    std::cout << "Id " << husbandAccount->getId() << std::endl;
    std::cout << "Name " << husbandAccount->getName() << std::endl;
    std::cout << "Amount " << husbandAccount->getAmount() << std::endl;


    std::cout << "++++++++++++++++++++++++++++++++++" << std::endl;

    jointAccount->setName("Joint Account");
    jointAccount->generateId();

    //jointAccount = husbandAccount + wifeAccount;

    std::cout << "Id " << jointAccount->getId() << std::endl;
    std::cout << "Name " << jointAccount->getName() << std::endl;
    std::cout << "Amount " << jointAccount->getAmount() << std::endl;


    std::cout << "++++++++++++++++++++++++++++++++++" << std::endl;

    *jointAccount = *husbandAccount + *wifeAccount;

    std::cout << "Id " << jointAccount->getId() << std::endl;
    std::cout << "Name " << jointAccount->getName() << std::endl;
    std::cout << "Amount " << jointAccount->getAmount() << std::endl;
    std::cout << "++++++++++++++++++++++++++++++++++" << std::endl;


    std::cout << "greater " << (*husbandAccount < *wifeAccount) << std::endl;


    delete (husbandAccount);
    delete (wifeAccount);
    delete (jointAccount);

    return 0;
}
