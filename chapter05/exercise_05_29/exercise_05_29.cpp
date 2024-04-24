#include <iostream>
#include <iomanip>

int
main()
{   
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Mahattan Island for %24.00. After 395 years." << std::endl;
        double rate = 1.05;
        for (int percent = 5; percent <= 10; ++percent) {
            double principal = 24.00;
            for (int year = 1; year <= 395; ++year) {
                principal *= rate;
            }
            rate += 0.01;
            std::cout << '\n' << "Rate: " << percent << "%\n";
            std::cout << '$' << principal << std::endl;
        }
    return 0;
}

