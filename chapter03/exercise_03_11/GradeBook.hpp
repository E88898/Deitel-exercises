#include <string>

class GradeBook
{
public:
    GradeBook(std::string course, std::string instructor);
    void setCourseName(std::string course);
    std::string getCourseName();
    void setCourseInstructorsName(std::string instructor);
    std::string getCourseInstructorsName();
    void displayMessage();
private:
    std::string courseName_;
    std::string courseInstructorsName_;
};

