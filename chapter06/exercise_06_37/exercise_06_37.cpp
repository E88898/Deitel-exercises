#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <cassert>

void correctMessage();
void incorrectMessage();
void multiplication();
bool question();
int checkRightsPercent(const int right, const int wrong); 
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
correctMessage()
{
    switch (std::rand() % 4) {
    case 0: std::cout << "Very good!";             break;
    case 1: std::cout << "Excellent!";             break;
    case 2: std::cout << "Nice work!";             break;
    case 3: std::cout << "Keep up the good work!"; break;
    }
    std::cout << "\n\n";
}

void
incorrectMessage()
{
    switch (std::rand() % 4) {
    case 0: std::cout << "No.please try again. ";  break;
    case 1: std::cout << "Wrong. Try once more. "; break;
    case 2: std::cout << "Don't give up!. ";       break;
    case 3: std::cout << "No. Keep trying. ";      break;
    }
}

void
multiplication()
{
    int rightAnswersCounter = 0, wrongAnswersCounter = 0;
    do {
        int const firstNumber = rand() % 10;
        int const secondNumber = rand() % 10;
        std::cout << "How much is " << firstNumber << " times " << secondNumber << "? ";
        const int answer = firstNumber * secondNumber;
        while (getAnswerFromUser() != answer) {
            ++wrongAnswersCounter;
            incorrectMessage();
        }
        ++rightAnswersCounter;
        correctMessage();
    } while (question());

    if (checkRightsPercent(rightAnswersCounter, wrongAnswersCounter) < 75) {
        std::cout << "Please ask your instructor for extra help" << std::endl;
    }
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
checkRightsPercent(const int right, const int wrong)
{
    assert(right + wrong != 0);
    return right * 100 / (right + wrong);

}

int
getAnswerFromUser()
{
    int answer;
    std::cin >> answer;
    return answer;
}
