#include "Student.h"


Person::Person(string n) {
    name = n;
}


Student::Student(int i, string n, double g) : Person(n) {
    id = i;
    if (g >= 0.0 && g <= 4.0) {
        gpa = g;
    }
    else {
        gpa = 0.0; 
    }
}

int Student::getId() { return id; }
double Student::getGpa() { return gpa; }
string Student::getName() { return name; }

void Student::addCourse(string courseName) {
    courses.push_back(courseName);
}

void Student::printStudent() {
    cout << "ID: " << id << " | Name: " << name << " | GPA: " << gpa << endl;
}