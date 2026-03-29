#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm> // ضفناها هنا عشان نستخدم sort

using namespace std;

class Person {
public:
    string name;
    Person(string n) { name = n; }
};

class Student : public Person {
private:
    int id;
    double gpa;
public:
    Student() : Person("") { id = 0; gpa = 0.0; }
    Student(int i, string n, double g) : Person(n) { id = i; gpa = g; }
    int getId() { return id; }
    double getGpa() { return gpa; }
};
#endif
