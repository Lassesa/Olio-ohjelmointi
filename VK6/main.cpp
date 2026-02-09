#include <iostream>
#include "student.h"
#include <vector>
#include <algorithm>
using namespace std;


int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
        {
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            string name;
            int age;

            cout << "Enter name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;

            Student s(name, age);
            studentList.push_back(s);
            break;
        }
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout<<"--All students--"<<endl;
            for(const auto& s : studentList){
                s.printStudentInfo();
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(),[](const Student& a, const Student& b){
                return a.getName() < b.getName();

            });
            cout<<"Students sorted by name"<<endl;
            for(const auto& s : studentList){
                s.printStudentInfo();
            }
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(),[](const Student& a, const Student& b){
                return a.getAge() < b.getAge();
            });

            cout<<"Students sorted by age"<<endl;
            for(const auto& s : studentList){
                s.printStudentInfo();
            }
            break;
        case 4:
        {
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            { string nimi;
            cout<<"Enter name to search: ";
            cin >> nimi;

            auto it = find_if(studentList.begin(), studentList.end(),[&](const Student& s) {
                return s.getName() == nimi;
            });

            if (it != studentList.end()){
                cout<<"Student found!"<<endl;
                it -> printStudentInfo();
            }
            else {
                cout<<"Student not found"<<endl;
            }

            break;
            }
            }
        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }


    }

while(selection < 5);

return 0;
}
