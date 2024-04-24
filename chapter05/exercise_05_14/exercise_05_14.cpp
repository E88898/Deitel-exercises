#include <iostream>
#include <unistd.h>

int
main()
{
    double total = 0;
    while (true) {
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter product's number between 1 to 5 (0 to end): ";
        }
        int productNumber;
        std::cin >> productNumber;
        if (productNumber < 0 || productNumber > 5) {
            std::cerr << "Error 1: invalid number." << std::endl;
            return 1;
        }
        if (0 == productNumber) {
            break;
        }

        int quantitySold;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter sold quantity: ";
        }
        std::cin >> quantitySold;
        if (quantitySold < 0 ) {
            std::cerr << "Error 2: invalid sold quantity." << std::endl;
            return 2;
        }
        
        switch (productNumber) {
        case 1: total += quantitySold * 2.98; break;
        case 2: total += quantitySold * 4.50; break;
        case 3: total += quantitySold * 9.98; break;
        case 4: total += quantitySold * 4.49; break;
        case 5: total += quantitySold * 6.87; break;
        }
    }

    std::cout << "Total value of products: $" << total << std::endl;

    return 0;
}

