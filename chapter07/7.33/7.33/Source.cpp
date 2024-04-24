#include <iostream>

int linearSearch(const int array[], const int arraySize, const int key, const int counter = 0);

int main()
{
    const int ARRAY_SIZE = 100;
    int array[ARRAY_SIZE];
    const int NUMBER_RANGE = 100;
    for (int counter = 0; counter < ARRAY_SIZE; ++counter) {
        array[counter] = std::rand() % NUMBER_RANGE;
    }
    int searchKey;
    std::cout << "Enter integer search key: ";
    std::cin >> searchKey;
    int keySubscript = linearSearch(array, ARRAY_SIZE, searchKey);
    if (keySubscript != -1) {
        std::cout << "Found value in element " << keySubscript << std::endl;
        return 0;
    }
    std::cout << "Value not found" << std::endl;
    return 0;
}

int linearSearch(const int array[], const int arraySize, const int key, const int counter)
{
    if (arraySize == counter) {
        return -1;
    }
    if (key == array[counter]) {
        return counter;
    }
    return linearSearch(array, arraySize, key, counter + 1);
}
