#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    Student(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    vector<Student> students;

    students.push_back(Student(1, "harsh"));
    students.push_back(Student(2, "raj"));
    students.push_back(Student(3, "krish"));

    cout << "Student List:" << endl;
    for (int i = 0; i < students.size(); i++) {
        students[i].display();
    }

    return 0;
}