#include <iostream>

int getStringLength(char array[], int arraySize);
bool testPalindrome(char array[], int stringLength, int firstItem = 0);

int main()
{
    std::cout << "Enter string to determine whether it is a palindrome:" << std::endl;
    const int MY_LENGTH = 100;
    char myString[MY_LENGTH];
    std::cin.getline(myString, MY_LENGTH);
    int stringLength = getStringLength(myString, MY_LENGTH);
    std::cout << "It " << (testPalindrome(myString, stringLength) ? "is" : "isn't") << " palindrome." << std::endl;
    return 0;
}

int getStringLength(char array[],int arraySize)
{
    for (int counter = 0; counter < arraySize; ++counter) {
        if (array[counter] != '\0') {
            continue;
        }
        return counter - 1;
    }
    return -1;
}

bool testPalindrome(char array[], int stringLength, int firstItem)
{
    if (firstItem > stringLength) {
        return true;
    }
    if (array[firstItem] == array[stringLength]) {
        return testPalindrome(array, stringLength - 1, firstItem + 1);
    }
    return false;
}
