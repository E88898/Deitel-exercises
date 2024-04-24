#include <iostream>
#include <iomanip>

int
main()
{
    double rate = 1.04;
    for (int percent = 5; percent <= 10; ++percent) {
        double principal = 1000.00;
        rate += 0.01;
        std::cout << "\nInterest Rate: " << percent << "%"
                  << "\nYear\tAmount on deposit\n";
        for (int year = 1; year <= 10; ++year) {
            principal *= rate;
            std::cout << year << '\t' << std::fixed << std::setprecision(2) << principal << std::endl;
        }
    }
    return 0;
}

