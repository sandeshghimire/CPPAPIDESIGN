#include <iostream>
#include <vector>

using std::endl;
using std::cout;


int main(int argc, char** argv)
{
    std::vector<int> vect;

    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
    vect.push_back(40);
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
    vect.push_back(40);

    cout << "Length of vector is " << vect.size() << endl;

    for(const auto i : vect)
    {
        cout << i << endl;
    }





    return 0;
}
