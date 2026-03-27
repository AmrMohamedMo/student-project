#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n);
};

class Student : public Person {
private:
    int id;
    double gpa;
    vector<string> courses; 

public:
    Student(int i, string n, double g);

    // Getters 
    int getId();
    double getGpa();
    string getName();

    void addCourse(string courseName);
    void printStudent(); 
};

#endif