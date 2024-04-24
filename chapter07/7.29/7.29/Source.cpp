#include <iostream>
#include <cmath>

void printArray(bool array[], int arraySize);
void markPrimes(bool array[], int arraySize);
void initializeArrayWithTrues(bool array[], int arraySize);

int main()
{
    const int SIZE = 1000;
    bool primes[SIZE];
    initializeArrayWithTrues(primes, SIZE);
    markPrimes(primes, SIZE);
    printArray(primes, SIZE);
    return 0;
}

void
initializeArrayWithTrues(bool array[],int arraySize)
{
    for (int counter = 1; counter < arraySize; ++counter) {
        array[counter] = true;
    }
}

void markPrimes(bool array[], int arraySize)
{
    for (int divider = 2; divider <= std::sqrt(arraySize); ++divider) {
        for (int element = 2 * divider; element < arraySize; element += divider) {
            array[element] = false;
        }
    }
}

void printArray(bool array[], int arraySize)
{
    for (int counter = 1; counter < arraySize; ++counter) {
        if (array[counter]) {
            std::cout << counter << ". - is prime" << std::endl;
        }
    }
}
