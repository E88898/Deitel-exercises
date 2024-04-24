#include <iostream>
#include <cmath>
#include <unistd.h>
#include <cassert>

int calculateSecond(const int hours, const int minutes, const int seconds);
int getHours();
int getMinutes();
int getSeconds();

int
main()
{
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter first time (hours - minutes - seconds)";
    }
    const int hours1 = getHours();
    const int minutes1 = getMinutes();
    const int seconds1 = getSeconds();
    const int firstTime = calculateSecond(hours1, minutes1, seconds1);
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter second time (hours - minutes - seconds)";
    }
    const int hours2 = getHours();
    const int minutes2 = getMinutes();
    const int seconds2 = getSeconds();
    const int secondTime = calculateSecond(hours2, minutes2, seconds2);
    std::cout << "Amount of time in seconds between two time is: " << std::abs(firstTime - secondTime)
              << " seconds"  <<std::endl;

    return 0;
}

int 
getHours()
{
    int hours;
    std::cin >> hours;
    if (hours < 0 || hours >= 24) {
        std::cerr << "Error 1: invalid hours." << std::endl;
        return 1;
    }
    return hours;
}

int
getMinutes()
{
    int minutes;
    std::cin >> minutes;
    if (minutes < 0 || minutes >= 60) {
        std::cerr << "Error 2: invalid minutes." << std::endl;
        return 2;
    }
    return minutes;
}

int
getSeconds()
{
    int seconds;
    std::cin >> seconds;
    if (seconds < 0 || seconds >= 60) {
        std::cerr << "Error 3: invalid seconds." << std::endl;
        return 3;
    }
    return seconds;
}

int
calculateSecond(const int hours, const int minutes, const int seconds)
{
    assert (hours >= 0 && hours < 24);
    assert (minutes >= 0 && minutes < 60);
    assert (seconds >= 0 && seconds < 60);
    return (hours % 12 * 3600 + minutes * 60 + seconds);
}
