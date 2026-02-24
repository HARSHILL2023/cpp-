#include <iostream>
using namespace std;

class Students
{
public:   // change private to public

    string name;
    int age;

    void print(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};

int main(){

    Students s1;

    s1.name="harshil";
    s1.age=13;

    s1.print();

    return 0;
}