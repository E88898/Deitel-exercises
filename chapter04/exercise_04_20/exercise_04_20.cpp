#include <iostream>
#include <unistd.h>

int
main()
{
    int passes = 0, failures = 0, student = 0;
    
    while (student < 10) {
        int result;
        if (::isatty(STDIN_FILENO)) { 
            std::cout << "Enter result (1=pass, 2=fail): ";
        }
        std::cin >> result;
        
        if (1 != result) {
            if (2 != result) {
                std::cout << "Invalid result." << std::endl;
            }
        }
           
        if (1 == result) {
            ++passes;
            ++student;
        } 
        
        if (2 == result) {
            ++failures;
            ++student;
        }
    
        std::cout << "Passed: " << passes << std::endl;
        std::cout << "Failed: " << failures << std::endl;
    
    } 
    
    if (passes >= 8) {
        std::cout << "Raise tuition" << std::endl;
    }
    
    return 0;
}

