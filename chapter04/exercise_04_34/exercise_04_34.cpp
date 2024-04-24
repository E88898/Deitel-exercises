#include <iostream>
#include <unistd.h>

int
main()
{
    int fourDigitInteger;
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter a four-digit integer to encrypt it: ";
    }
    std::cin >> fourDigitInteger;
    
    if (fourDigitInteger < 1000 ) {
        if (fourDigitInteger > -1000) {
            std::cerr << "Error 1: that's not four-digit integer." << std::endl;
        return 1;
        }
    }
    
    if (fourDigitInteger > 9999 ) {
        std::cerr << "Error 1: that's not four-digit integer." << std::endl;
        return 1;
    }
    
    if (fourDigitInteger < -9999 ) {
        std::cerr << "Error 1: that's not four-digit integer." << std::endl;
        return 1;
    }
    
    int encryptedFirstDigit = ((fourDigitInteger / 1000 + 7) % 10);
    int encryptedSecondDigit = ((fourDigitInteger % 1000 / 100 + 7) % 10);
    int encryptedThirdDigit = ((fourDigitInteger % 100 / 10 + 7) % 10) ;
    int encryptedFourthDigit = ((fourDigitInteger % 10 + 7) % 10);
    int encrypted = 1000 * encryptedThirdDigit + 100 * encryptedFourthDigit + 10 * encryptedFirstDigit + encryptedSecondDigit;
    
    std::cout << "The encrypted four-digit integer is " << encrypted << std::endl;
    
    return 0;
}

