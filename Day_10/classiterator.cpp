#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    int age;
    int marks;
    char grade;
    bool passed;

    void input()
    {
        cout << "Enter the Name, Age, Marks, Grade: " << endl;
        cin >> name >> age >> marks >> grade;
        passed = marks >= 50;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
        cout << "Passed: " << (passed ? "Yes" : "No") << endl;
    }
};

int main()
{
    vector<Student> students;
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (vector<Student>::iterator it = students.begin(); it != students.end(); ++it) {
        Student student;
        student.input();
        students.push_back(student);
    }

    cout << "Student Details:" << endl;
    for (vector<Student>::iterator it = students.begin(); it != students.end(); ++it) {
        it->display();
        cout << endl;
    }

    return 0;
}