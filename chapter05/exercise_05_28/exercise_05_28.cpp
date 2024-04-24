#include <iostream>

int
main()
{
    for (int day = 1; day < 13; ++day) {
        std::cout << "\tOn the ";
        switch (day) {
        case 1: std::cout << "first";     break;
        case 2: std::cout << "second";    break;
        case 3: std::cout << "third";     break;
        case 4: std::cout << "fourth";    break;
        case 5: std::cout << "fifth";     break;
        case 6: std::cout << "sixth";     break;
        case 7: std::cout << "seventh";   break;
        case 8: std::cout << "eighth";    break;
        case 9: std::cout << "nineth";    break;
        case 10: std::cout << "tenth";    break;
        case 11: std::cout << "eleventh"; break;
        case 12: std::cout << "twelfth";  break;
        }
        std::cout << " day of Christmas\n\tmy true love sent to me:" << std::endl;
        switch (day) {
        case 12: std::cout << "\t12 Drummers Drumming\n";
        case 11: std::cout << "\tEleven Pipers Piping\n";
        case 10: std::cout << "\tTen Lords a Leaping\n";
        case 9: std::cout << "\tNine Ladies Dancing\n";
        case 8: std::cout << "\tEight Maids a Milking\n";
        case 7: std::cout << "\tSeven Swans a Swimming\n";
        case 6: std::cout << "\tSix Geese a Laying\n";
        case 5: std::cout << "\tFive Golden Rings\n";
        case 4: std::cout << "\tFour Calling Birds\n";
        case 3: std::cout << "\tThree French Hens\n";
        case 2: std::cout << "\tTwo Turtle Doves, and\n";
        case 1: std::cout << "\tA Partridge in a Pear Tree\n\n";
        }
    }
    return 0;
}
