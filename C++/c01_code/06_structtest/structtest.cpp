#include <iostream>
#include "employeestruct.h"

using namespace std;

int main()
{
    // create and populate an employee
    DX::Employee anEmployee;

    DX::Record r;

    anEmployee.firstInitial = 'M';
    anEmployee.lastInitial = 'G';
    anEmployee.employeeNumber = 42;
    anEmployee.salary = 80000;

    r.EmployeeAge = 34;
    r.EmployeeHired = false;
    r.EmployeeId = 2345675;



    // output the values of an employee
    cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
    cout << "Number: " << anEmployee.employeeNumber << endl;
    cout << "Salary: $" << anEmployee.salary << endl;

    cout << "EmployeeAge" << r.EmployeeAge << endl;




    return 0;
}
