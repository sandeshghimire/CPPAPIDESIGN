#include <iostream>

int main()
{

    int *ptr = new int[100];

    *(ptr + 10) = 9;

    std::cout << "*ptr " << *(ptr + 10) << std::endl;


    delete (ptr);


    return 0;
}
/**/