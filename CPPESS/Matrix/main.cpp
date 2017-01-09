#include "Matrix.h"

using namespace SG;

int main(int argc, char** argv)
{
    Matrix * m = new Matrix(2,2 );

    auto HelloYeah = m->MaxNumber(200, 400);

    std::cout << m->MaxNumber(200, 400) << "  " <<HelloYeah  <<std::endl;

    delete (m);
    return 0;
}
