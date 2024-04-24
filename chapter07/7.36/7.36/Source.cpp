#include <iostream>

void stringReverse(const char array[], const int counter = 0);

int main()
{
    const int ARRAY_SIZE = 10;
    char characterArray[ARRAY_SIZE];
    std::cout << "Enter string: " << std::endl;
    std::cin >> characterArray;
    stringReverse(characterArray);
    return 0;
}
void stringReverse(const char array[], const int counter)
{
    if ('\0' == array[counter]) {
        return;
    }
    stringReverse(array, counter + 1);
    std::cout << array[counter];
    if (0 == counter) {
        std::cout << std::endl;
    }
}
