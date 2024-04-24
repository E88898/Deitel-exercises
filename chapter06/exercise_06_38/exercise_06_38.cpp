#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <cassert>

void guessGame();
bool isCorrect(int const guess, int const answer);
bool question();

int
main()
{
    if (::isatty(STDIN_FILENO)) {
        std::srand(std::time(0));
    }
    guessGame();
    return 0;
}

void
guessGame()
{
    do {
        const int answer = 1 + std::rand() % 1000;
        std::cout << "I have a number between 1 and 1000.\n"
                  << "Can you guess my number?\n"
                  << "Please type your first guess. ";
        int guess;
        do { 
            std::cin >> guess;
            if (guess < 1 || guess > 1000) {
                std::cerr << "Error 1: invalid number." << std::endl;
                ::exit(1);
            }
        } while (!isCorrect(guess, answer));
        std::cout << "\nExcellent! You guessed the number!\n";
    } while (question());
}

bool 
isCorrect (int guess, int const answer)
{ 
    assert(guess >= 1 || guess <= 1000);
    if (guess == answer) {
        return true;
    }
    if (guess < answer) {
        std::cout << "Too low. Try again. ";
        return false;
    } 
    std::cout << "Too high. Try again. ";
    return false;
}

bool
question()
{
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Would you like to play again?\n"
                  << "Please type (y/n)? ";
    }
    char question;
    std::cin >> question;
    if (!('y' == question || 'Y' == question || 'n' == question || 'N' == question)) {
        std::cerr << "Error 2: invalid symbol." << std::endl;
        ::exit(2);
    }
    return ('y' == question || 'Y' == question);
}

