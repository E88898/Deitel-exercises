#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

void multiplication();
bool question();
int getAnswerFromUser();

int
main()
{   
    if (::isatty(STDIN_FILENO)) {
        std::srand(std::time(0));
    }
    multiplication();
    return 0;
}

void
multiplication()
{
    do {
        const int firstNumber = ::rand() % 10;
        const int secondNumber = ::rand() % 10;
        std::cout << "How much is " << firstNumber << " times " << secondNumber << "? ";
        const int answer = firstNumber * secondNumber;
        while (getAnswerFromUser() != answer) {
            std::cout << "No. Please try again. ";
        }
        std::cout << "Very good!\n\n";
    } while (question());
}

bool
question()
{
    if (::isatty(STDIN_FILENO)) {
        std::cout << "New question Y/N. ";
    }
    char question;
    std::cin >> question;
    if (!('y' == question || 'Y' == question || 'n' == question || 'N' == question)) {
        std::cerr << "Error 1: invalid symbol." << std::endl;
        ::exit(1);
    }
    return ('y' == question || 'Y' == question);
}

int
getAnswerFromUser()
{
    int answer;
    std::cin >> answer;
    return answer;
}
