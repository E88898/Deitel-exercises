#include <iostream>
#include <unistd.h>

int
main()
{
    int code;
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter employee's code: ";
    }
    std::cin >> code;
    
    switch (code) {
    case 1: 
        double salary1;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter manager's weekly salary: ";
        }
        std::cin >> salary1;
        if (salary1 < 0) {
            std::cerr << "Error 1: salary is negative." << std::endl;
            return 1;
        }
        std::cout << "Manager's weekly salary is " << salary1 << std::endl;
        break;
    case 2:
        double salary2;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter hourly worker's salary for one hour: ";
        }
        std::cin >> salary2;
        if (salary2 < 0) {
            std::cerr << "Error 2: salary is negative." << std::endl;
            return 2;
        }
        int hour;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter worked hours in one week: ";
        }
        std::cin >> hour;
        if (hour < 0 && hour > 168) {
            std::cerr << "Error 3: invalid hours." << std::endl;
            return 3;
        }
        double weeklySalary;
        weeklySalary = salary2 * hour;
        if (hour > 40) {
           weeklySalary = salary2 * (1.5 * hour - 20);
        }
        std::cout << "Hourly worker's weekly salary is " << weeklySalary << std::endl;
        break;
    case 3: 
        double soldItemPrice;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter commission worker's sold items price in week: ";
        }
        std::cin >> soldItemPrice;
        if (soldItemPrice < 0) {
            std::cerr << "Error 4: invalid price." << std::endl;
            return 4;
        }
        double salary3;
        salary3 = 250 + soldItemPrice * 0.057;
        std::cout << "Commission worker's weekly salary is " << salary3 << std::endl;
        break;
    case 4:
        int item;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter pieceworker's producted items quantity in week: ";
        }
        std::cin >> item;
        if (item < 0) {
            std::cerr << "Error 5: invalid quantity." << std::endl;
            return 5;
        }
        double price;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter item's price: ";
        }
        std::cin >> price;
        if (price < 0) {
            std::cerr << "Error 6: invalid price" << std::endl;
            return 6;
        }
        double salary4;
        salary4 = item * price;
        std::cout << "Pieceworker's weekly salary is " << salary4 << std::endl;
        break;
    default: 
        std::cerr << "Error 7: invalid code." << std::endl;
        return 7;
    } 
    return 0;
}

