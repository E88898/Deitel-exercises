#include "HugeInteger.h"
#include <iostream>

int main()
{
    int first[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8,
        9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
        33, 34, 35, 36, 37, 38, 39, 40 };
    int second[SIZE] = { 40, 39, 38, 37, 36, 35,
        34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23,
        22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,
        10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int zero[SIZE] = { 0 };

    HugeInteger myHugeInteger0;
    HugeInteger myHugeInteger1;
    HugeInteger myHugeInteger2;

    myHugeInteger1.input(first);
    myHugeInteger2.input(second);
    myHugeInteger0.input(zero);

    std::cout << "myHugeInteger0:\n" << std::endl;
    myHugeInteger0.output();
    std::cout << "\n\nmyHugeInteger1:\n" << std::endl;
    myHugeInteger1.output();
    std::cout << "\n\nmyHugeInteger2:\n" << std::endl;
    myHugeInteger2.output();
    std::cout << "\n" << std::endl;

    std::cout << myHugeInteger0.isZero() << std::endl;
    std::cout << myHugeInteger1.isZero() << std::endl;
    std::cout << myHugeInteger2.isZero() << std::endl;

    HugeInteger myHugeInteger3;
    myHugeInteger3 = myHugeInteger0.add(&myHugeInteger1);
    std::cout << "\nThe sum of myHugeInteger0 plus myHugeInteger1 equals " << std::endl;
    myHugeInteger3.output();

    myHugeInteger3 = myHugeInteger1.subtract(&myHugeInteger2);
    std::cout << "\n\nThe difference of myHugeInteger1 minus myHugeInteger2 equals " << std::endl;
    myHugeInteger3.output();

    myHugeInteger3 = myHugeInteger1.multiply(&myHugeInteger2);
    std::cout << "\n\nThe product of myHugeInteger1 times myHugeInteger2 equals " << std::endl;
    myHugeInteger3.output();

    myHugeInteger3 = myHugeInteger2.divide(&myHugeInteger1);
    std::cout << "\n\nThe dividen of myHugeInteger2 divided by myHugeInteger1 equals " << std::endl;
    myHugeInteger3.output();

    std::cout << "\n\nIs myHugeInteger0 equal to myHugeInteger2? \n\n";
    std::cout << myHugeInteger0.isEqual(&myHugeInteger1) << std::endl;

    std::cout << "\nIs myHugeInteger1 not equal to myHugeInteger2? \n\n";
    std::cout << myHugeInteger1.isNotEqual(&myHugeInteger2) << std::endl;

}