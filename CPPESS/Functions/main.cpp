#include <iostream>

int  Sum(int number1, int number2)  ;


int main(int argc, char ** argv)
{
    std::cout << "The Sum of 4 and 5 is " << Sum(4, 5) << std::endl;

    return 0;
}

int  Sum(int number1, int number2)
{
    int TotalSum = (number1 + number2);
    return TotalSum;
}
