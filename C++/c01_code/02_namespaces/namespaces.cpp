#include <iostream>
#include "namespaces.h"

namespace mycode
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
