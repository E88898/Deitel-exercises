#include <iostream>
#include <unistd.h>

int
main()
{
    int sideSize;
    
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter the square side from 1 to 20: ";
    }
    std::cin >> sideSize;
    
    if (sideSize < 1) {
        std::cerr << "Error 1: Enter size of the square from 1 to 20: " << std::endl;
        return 1;
    }
    
    if (sideSize > 20) {
        std::cerr << "Error 1: Enter size of the square from 1 to 20: " << std::endl;
        return 1;
    }
    
    int column = 1;

    while (column <= sideSize) {
        int row = 1;
        while (row <= sideSize) {
           if (1 == row ) {
               std::cout << "*";
           } else if (row == sideSize) {
               std::cout << "*";
           } else if (1 == column) {
               std::cout << "*";
           } else if (column == sideSize) {
               std::cout << "*";
           } else {
               std::cout << " ";
           }
           ++row;
        }
        std::cout << std::endl;
        ++column;
    } 
    
    return 0;
}

