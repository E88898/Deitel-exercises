#include <iostream>

int
main()
{
    int product = 1;
    
    for (int odd = 3; odd <= 15; odd += 2) {
        product *= odd;
    }
    
    std::cout << "Product of the odd integers from 1 to 15 is: "
              << product << std::endl;
    
    return 0;
}

