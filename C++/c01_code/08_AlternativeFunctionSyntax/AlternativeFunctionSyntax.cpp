#include <iostream>

using namespace std;

auto func(int i) -> int
{
    cout << __func__ << endl;
    return i + 2;
}


auto my_fuction(int x) -> unsigned char
{
    cout << __func__ << endl;
    return x + 3;
}


auto main() -> int
{
    cout << func(3) << endl;
    cout << my_fuction(3) << endl;


	return 0;
}
