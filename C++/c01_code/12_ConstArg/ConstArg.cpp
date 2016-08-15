#include <string>
#include <iostream>

namespace DX
{
    void mysteryFunction(std::string *someString)
    {
        *someString = "Test";  // Will not compile.
    }


    void mysteryFunction2(const int input)
    {
        std::cout << "Input is " << input << std::endl;
    }

    void mysteryFunction3(const std::string &input)
    {
        std::cout << "Input is " << input << std::endl;
    }

    void mysteryFunction4(const int *const input)
    {

        std::cout << "Input is " << *input << std::endl;
    }

    void mysteryFunction5(const int * input)
    {

        std::cout << "Input is " << *input << std::endl;
    }


    void mysteryFunction6(int *const input)
    {

        std::cout << "Input is " << *input << std::endl;
    }


    void mysteryFunction7(int * input)
    {

        std::cout << "Input is " << *input << std::endl;
    }


}

int main()
{
    int * input = (int *) 34;
    std::string myString = "The string";
    DX::mysteryFunction(&myString);
    DX::mysteryFunction3(myString);

    DX::mysteryFunction4(input);
    DX::mysteryFunction5(input);
    DX::mysteryFunction6(input);
    DX::mysteryFunction7(input);





    return 0;
}

