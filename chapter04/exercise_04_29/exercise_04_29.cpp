#include <iostream>

int
main()
{
    int number = 2;
    while (true) {
        std::cout << number << std::endl;
        number *= number;
    }
    return 0;
}
/*The int type has 4 byte memory that means 32 bits. The left most bit in 32 bits is for sign, if it is 0 that means that sign is " + ", if it is 1 the sign is " - ".
So when the loop prints 2 power 31 after one more multiplication by 2 it gets 0, which is 33 bits, but we have only 32 bits in this case the additional bit is being droped automaticaly from left.
After 2 power 32 all coming powers is 0 because 0 x 2 is 0.*/ 
