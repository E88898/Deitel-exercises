#include <iostream>

int
main()
{
    std::cout << "(a)" << std::endl;
    for (int row = 1; row <= 10; ++row) {
        
        for (int col = 1; col <= row; ++col) {
            std::cout << "*";
        }
        std::cout << '\n';
    }
    
    std::cout << '\n';
    
    std::cout << "(b)" << std::endl;
    for (int row = 10; row >= 1; --row) {
        
        for (int col = 1; col <= row; ++col) {
            std::cout << "*";
        }
        std::cout << '\n';
    }
    
    std::cout << '\n';
    
    std::cout << "(c)" << std::endl;
    for (int row = 10; row >= 1; --row) {
        
        for (int space = 1; space <= 10 - row; ++space) {
            std::cout << ' ';
        }
        
        for (int column = 1; column <= row;  ++column) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
        
    std::cout << '\n';
    
    std::cout << "(d)" << std::endl;
    for (int row = 1; row <= 10; ++row) {

        for (int space = 1; space <= 10 - row; ++space) {
            std::cout << ' ';
        }

        for (int column = 1; column <= row; ++column) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    
        return 0;
    }
