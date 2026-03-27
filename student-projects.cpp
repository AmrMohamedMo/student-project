#include <iostream>
#include <vector>
#include "Student.h"

using namespace std;

int main() {
    vector<Student> allStudents; 
    int choice;

    while (true) {
        
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Sort Students by GPA\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 4) break;

        if (choice == 1) {
            int id; string name; double gpa;
            cout << "Enter ID: "; cin >> id;
            cout << "Enter Name: "; cin >> name;
            cout << "Enter GPA: "; cin >> gpa;

        
            Student newStudent(id, name, gpa);
            allStudents.push_back(newStudent);
            cout << "Student added successfully!\n";
        }
        else if (choice == 2) {
            if (allStudents.empty()) {
                cout << "No students found.\n";
            }
            else {
        
                for (int i = 0; i < allStudents.size(); i++) {
                    allStudents[i].printStudent();
                }
            }
        }
        else if (choice == 3) {
            if (allStudents.empty()) {
                cout << "No students to sort!\n";
            }
            else {
        
                for (int i = 0; i < allStudents.size(); i++) {
                    for (int j = i + 1; j < allStudents.size(); j++) {
                        if (allStudents[i].getGpa() < allStudents[j].getGpa()) {
        
                            Student temp = allStudents[i];
                            allStudents[i] = allStudents[j];
                            allStudents[j] = temp;
                        }
                    }
                }
                cout << "Sorted by GPA (Highest to Lowest):\n";
                for (int i = 0; i < allStudents.size(); i++) {
                    allStudents[i].printStudent();
                }
            }
        }
    }
    return 0;
}