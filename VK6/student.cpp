#include "student.h"
#include <string>
#include <iostream>
using namespace std;

Student::Student(string n, int i) {
    name = n;
    age = i;
}
void Student::setAge(int i){
    age = i;
}

void Student::setName(std::string n){
    name = n;
}

int Student::getAge() const{
    return age;
}

string Student::getName() const{
    return name;
}
void Student::printStudentInfo() const{
    cout<<"Student: "<<name<<" Age: "<<age<<endl;
}
