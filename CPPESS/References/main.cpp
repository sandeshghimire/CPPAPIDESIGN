#include <iostream>

#include <array>

int main(int argc, char ** argv)
{
    std::array<int, 40> anArray;
    for(int i = 0; i < anArray.size(); i++)
    {
        std::cout << "Array index " << i << " value " << anArray[i] << std::endl;
    }






    return 0;
}
