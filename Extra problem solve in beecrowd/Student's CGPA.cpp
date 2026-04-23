#include <bits/stdc++.h>
using namespace std;

class A64 {
public:
    string studentName;
    float cgpa;

public:
    A64(string name, float c) {
        studentName = name;
        cgpa = c;
    }

    void CGPA() {
        cout << "Student Name: " << studentName << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    const int numberofstudent = 6;
    A64 students[numberofstudent] = {
        A64("Munim", 3.75),
        A64("Imran", 3.85),
        A64("Akash", 3.95),
        A64("Neyamul", 3.81),
        A64("Tawhid", 3.83),
        A64("Anamika", 3.89)
    };

    cout << "Batch: 64/A:-\n" << endl;
    for (int i = 0; i < numberofstudent; i++) {
        students[i].CGPA();
        cout << endl;
    }

    return 0;
}

