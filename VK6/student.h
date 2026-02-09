#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student
{
public:
    Student(std::string n, int i);
    void setAge(int i);
    void setName(std::string n);
    int getAge() const;
    std::string getName() const;
    void printStudentInfo() const;

private:
    std::string name;
    int age;

};

#endif // STUDENT_H
