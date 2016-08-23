#include <string>
#include <vector>
#include <iostream>
#include <iterator>

using namespace std;

template<typename T>
T value(T a)
{
    std::cout << a * a << std::endl;
    return a;
}


int main()
{
    std::cout << (value(10)) << std::endl;
    return 0;
}
