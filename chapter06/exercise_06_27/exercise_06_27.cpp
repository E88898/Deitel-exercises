#include <iostream>

int celcius(const int fahrenheit);
int fahrenheit(const int celcius);

int
main()
{
    std::cout << "Fahrenheit equivalents of Celcius temperatures:\n"
              << "Celcius\t\tFahrenheit\n";
    for (int celsius = 0; celsius <= 100; ++celsius) {
        std::cout << celsius << "\t\t" << fahrenheit(celsius) << std::endl;
    }
    std::cout << "\nCelcius equivalents of Fahrenheit temperatures:\n"
              << "Fahrenheit\tCelcius\n";
    for (int fahrenheit = 32; fahrenheit <= 212; ++fahrenheit) {
        std::cout << fahrenheit << "\t\t" << celcius(fahrenheit) << std::endl;
    }
    return 0;
}

int
celcius(const int fahrenheit)
{
    return static_cast<int> (5.0 / 9.0 * (fahrenheit - 32));
}

int 
fahrenheit(const int celsius)
{
    return static_cast<int> (9.0 / 5.0 * celsius + 32);
}
