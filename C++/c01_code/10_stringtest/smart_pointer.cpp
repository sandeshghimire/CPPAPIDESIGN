#include <iostream>
#include <memory>
#include <string>

using namespace std;

//#define  CPP_14
namespace  DX
{
    struct Employee
    {
        std::string name;
        int age;
        int salary;

    };
}
int main(int argc, char** argv)
{
    DX::Employee * e = new DX::Employee;

    auto * em = new DX::Employee;

#ifdef  CPP_14
    auto myEmp = std::make_unique <Employee>;
#endif

    return 0;
}