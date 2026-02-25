#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    Student(string name1,int rollNumber1) { 
        name = name1;
        rollNumber = rollNumber1;
    }

    void display() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student s1("hasrhil",18);
    s1.display();



    return 0;
}