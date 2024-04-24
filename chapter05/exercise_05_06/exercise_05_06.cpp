#include <iostream>
#include <unistd.h>

int
main()
{
    int counter = 0, total = 0;
    while (true) {
        int number;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter integer (9999 to end): ";
        }
        std::cin >> number;
        
        if (number > 9999 || number < -9999) {
            std::cerr << "Error 1: invalide number." << std::endl;
            return 1;
        }
        
        if (9999 == number) {
            break;
        }
        
        total += number;
        ++counter;
    }
    
    if (0 == counter) {
        std::cout << "\nNo values were entered." << std::endl;
        return 0;
    } 
    
    std::cout << "\nThe average is: "
              << static_cast<double>(total) / counter << std::endl;
    
    return 0;
}
