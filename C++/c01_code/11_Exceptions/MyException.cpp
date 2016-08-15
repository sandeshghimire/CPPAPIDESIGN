#include <iostream>
#include <stdexcept>

using std::cout;
using std::endl;

namespace DX
{
    static double myDivideFunctions(const double numerator, const double denominator);
}

int main(int argc, char **argv)
{
    try
    {

        DX::myDivideFunctions(5.0, 4.0);
        DX::myDivideFunctions(5.0, 3.0);
        DX::myDivideFunctions(5.0, 2.0);
        DX::myDivideFunctions(5.0, 1.0);
        DX::myDivideFunctions(5.0, 0.0);
        DX::myDivideFunctions(1.0, -1.0);
    }
    catch (const std::exception &exception)
    {
        cout << "Exception caught  " << exception.what() << endl;

    }

    return 0;
}


static double DX::myDivideFunctions(const double numerator, const double denominator)
{
    if (denominator == 0)
    {
        throw std::invalid_argument("denominator cannot be 0");
    }
    double retVlaue = (numerator / denominator);
    cout << retVlaue << endl;


}
