#include <iostream>
#include <iomanip>

int
main()
{
    int principal = 1000;  
    std::cout << "Year" << std::setw(21) << "Amount on deposit" << std::endl;
    for (int year = 1; year <= 10; year++) {
        principal *= 105;
        int cents = principal % 100;
        principal /= 100;
        std::cout << std::setw(4) << year << std::setw(18) << principal << '.' << cents << std::endl;
    } 
    return 0; 
}

