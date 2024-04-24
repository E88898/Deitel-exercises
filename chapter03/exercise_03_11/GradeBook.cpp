#include "GradeBook.hpp"
#include <iostream>
#include <string>

GradeBook::GradeBook(std::string course, std::string instructor)
{
    setCourseName(course);
    setCourseInstructorsName(instructor);
}

void
GradeBook::setCourseName(std::string course)
{
    courseName_ = course;
}

std::string
GradeBook::getCourseName()
{
    return courseName_;
}
    
void
GradeBook::setCourseInstructorsName(std::string instructor)
{
    courseInstructorsName_ = instructor;
}


std::string
GradeBook::getCourseInstructorsName()
{ 
    return courseInstructorsName_;
}

void
GradeBook::displayMessage()
{
    std::cout << std::endl << "Welcome to the Grade Book for: " << getCourseName() << std::endl;
    std::cout << "This course is presented by : " << getCourseInstructorsName() << std::endl;
}
