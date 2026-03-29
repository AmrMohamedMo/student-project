#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include "Student.h"

using namespace std;

int main() {
    map<int, Student> m;
    int choice;

    while (true) {
        cout << "\n1.Add 2.Display 3.Sort 4.Exit\nChoice: ";
        cin >> choice;
        if (choice == 4) break;

        if (choice == 1) {
            int id; string name; double gpa;
            cout << "ID: "; cin >> id;
            cout << "Name: "; cin >> name;
            cout << "GPA: "; cin >> gpa;
            m[id] = Student(id, name, gpa);
        }
        else if (choice == 2) {
            for (auto item : m) cout << "ID: " << item.first << " Name: " << item.second.name << " GPA: " << item.second.getGpa() << endl;
        }
        else if (choice == 3) {
            vector<Student> v;
            for (auto item : m) v.push_back(item.second);

            // الترتيب باستخدام sort
            sort(v.begin(), v.end(), [](Student a, Student b) {
                return a.getGpa() > b.getGpa();
                });

            for (auto s : v) cout << "ID: " << s.getId() << " GPA: " << s.getGpa() << endl;
        }
    }
    return 0;
}
