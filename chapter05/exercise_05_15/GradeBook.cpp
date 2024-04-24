#include <iostream>
#include <cstdio>
#include "GradeBook.hpp"

GradeBook::GradeBook(std::string name)
{
    setCourseName(name);
    aCount_ = 0;
    bCount_ = 0;
    cCount_ = 0;
    dCount_ = 0;
    fCount_ = 0;
} 

void
GradeBook::setCourseName(std::string name)
{
    if (name.length() <= 25) {
        courseName_ = name; 
    } else { 
        courseName_ = name.substr(0, 25); 
        std::cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
        << "Limiting courseName to first 25 characters.\n" << std::endl;
      }
}

std::string
GradeBook::getCourseName()
{
    return courseName_;
}

void
GradeBook::displayMessage()
{
    std::cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
              << std::endl;
}

void
GradeBook::inputGrades()
{
    int grade; 
    std::cout << "Enter the letter grades." << std::endl
         << "Enter the EOF character to end input." << std::endl;
    while ((grade = std::cin.get()) != EOF) {
        switch (grade) {
        case 'A': case 'a': ++aCount_; break; 
        case 'B': case 'b': ++bCount_; break; 
        case 'C': case 'c': ++cCount_; break; 
        case 'D': case 'd': ++dCount_; break; 
        case 'F': case 'f': ++fCount_; break; 
        case '\n': case '\t': case ' ': break; 
        default:
            std::cout << "Incorrect letter grade entered."
                      << " Enter a new grade." << std::endl;
            break;
        }
    }
}

void
GradeBook::displayGradeReport()
{
    std::cout << "\n\nNumber of students who received each letter grade:"
              << "\nA: " << aCount_ 
              << "\nB: " << bCount_
              << "\nC: " << cCount_
              << "\nD: " << dCount_
              << "\nF: " << fCount_
              << std::endl;
    int  denominator = aCount_ + bCount_ + cCount_ + dCount_ + fCount_;
    if (0 == denominator) { 
        std::cerr << " No grades to calculate" << std::endl;
        return;
    }

    std::cout << "Grade-point average for the set of grades " << ((aCount_ * 4) + (bCount_ * 3) + (cCount_ * 2) + dCount_) / denominator << std::endl;
}
