#include <string> 

class GradeBook
{
public:
    GradeBook(std::string name);
    void setCourseName(std::string name); 
    std::string getCourseName();
    void displayMessage();
    void inputGrades();
    void displayGradeReport();
private:
    std::string courseName_;
    int aCount_;
    int bCount_;
    int cCount_;
    int dCount_;
    int fCount_;
};

