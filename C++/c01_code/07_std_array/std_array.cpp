#include <iostream>
#include <array>

int main() {

    std::array<double, 10> dArray = {0};
    std::cout << "Array size = " << dArray.size() << std::endl;
    std::cout << "Value of dArray element 10 is " << dArray[0] << std::endl;


    for (int i : dArray) {
        std::cout << dArray[i] << std::endl;
    }


    std::array<int, 3> arr = {9, 8, 7};
    std::cout << "Array size = " << arr.size() << std::endl;
    std::cout << "Element 2 = " << arr[1] << std::endl;

    return 0;
}
