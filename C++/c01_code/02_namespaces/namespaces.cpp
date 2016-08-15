#include <iostream>
#include "namespaces.h"

namespace DX
{
    void foo()
    {
        std::cout << "foo() called in the mycode namespace" << std::endl;
    }

    void bar ()
    {
        std::cout << "foo() called in the mycode namespace" << std::endl;
    }
}
