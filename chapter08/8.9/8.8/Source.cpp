#include <iostream>

int main()
{
    const int SIZE = 5;
    unsigned int values[SIZE] = { 2, 4, 6, 8, 10 };
    unsigned int* vPtr;

    vPtr = values;
    vPtr = &values[0];

    for (int counter = 0; counter < SIZE; ++counter) {
        std::cout << values[counter] << ' ';
    }
    std::cout << std::endl;
    for (int counter = 0; counter < SIZE; ++counter) {
        std::cout << *(vPtr + counter) << ' ';
    }
    std::cout << std::endl;
    for (int counter = 0; counter < SIZE; ++counter) {
        std::cout << *(values + counter) << ' ';
    }
    std::cout << std::endl;
    for (int counter = 0; counter < SIZE; ++counter) {
        std::cout << vPtr[counter] << ' ';
    }
    std::cout << std::endl;

    std::cout << values[SIZE - 1] << std::endl;
    std::cout << *(vPtr + SIZE - 1) << std::endl;
    std::cout << *(values + SIZE - 1) << std::endl;
    std::cout << vPtr[SIZE - 1] << std::endl;

    std::cout << vPtr + 3 << "   " << '|' << *(vPtr + 3) << '|' << std::endl;

    vPtr += 4;
    std::cout << vPtr << "   " << '|' << *vPtr << '|' << std::endl;
    vPtr -= 4;
    std::cout << vPtr << "   " << '|' << *vPtr << '|' << std::endl;
    return 0;
}
