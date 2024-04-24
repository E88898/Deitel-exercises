#include <iostream>

int
main()
{
    std::cout << "X\tFactorial of X\n";
    int factorial = 1;
    for (int xColumn = 1; xColumn <= 5; ++xColumn) {
        factorial *= xColumn;  
        
        std::cout << xColumn << '\t' << factorial << std::endl;
    }
    
    return 0;
}
/// Factorial of 20 is much big number than 2^31 - 1 it isn't place in 31 bits.
