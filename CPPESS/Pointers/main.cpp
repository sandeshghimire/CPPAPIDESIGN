#include <iostream>

#include <array>

// smart pointers

struct Employee
{
    int Age;
    int Salary;
    int Hired;
    std::string FirstName;
    std::string LastName;
};


int RawPointerTest();

int WeakPointerTest();

int SharedPointerTest();

int UniquePointerTest();

int main(int argc, char **argv)
{
    RawPointerTest();
    WeakPointerTest();
    SharedPointerTest();
    UniquePointerTest();
    return 0;
}

int RawPointerTest()
{
    std::cout << "This is Raw Pointer Test " << std::endl;
    Employee *anEmployee = nullptr;
    anEmployee = new Employee;
    delete (anEmployee);
    anEmployee = nullptr;
}

int WeakPointerTest()
{

    std::cout << "This is Weak Pointer Test " << std::endl;
    //std::weak_ptr<Employee> anEmployee ( new Employee);

}

int SharedPointerTest()
{
    std::cout << "This is Shared Pointer Test " << std::endl;
    //std::shared_ptr<Employee> anEmployee ( new Employee);

}

int UniquePointerTest()
{
    std::cout << "This is Unique  Pointer Test " << std::endl;
    //std::unique_ptr<Employee> anEmployee ( new Employee);

}




