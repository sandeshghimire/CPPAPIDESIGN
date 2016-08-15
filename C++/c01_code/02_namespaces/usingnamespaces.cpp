#include "namespaces.h"


using namespace DX;


int main()
{
    DX::foo();    // Calls the "foo" function in the "mycode" namespace

    foo();            // implies mycode::foo();

    DX::bar();

    return 0;
}
