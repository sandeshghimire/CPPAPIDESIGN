#include <iostream>

using namespace std;

void func(char *str)
{ cout << "char* version" << endl; }

void func(int i)
{ cout << "int version" << endl; }

int main()
{

    int arrayAize = 30;
    int *pArray = new int[arrayAize];


    *(pArray + 2) = 45;


    cout << "pArray is " << *(pArray + 2) << endl;


    return 0;
}
