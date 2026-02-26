#include <iostream>
using namespace std;


//this is parent class the properties of it can be used in child class
class Animal {
public:
    void eat() {
        cout << "Animal eats food" << endl;
    }
    void harshil(){
        cout<<"this is harshil class"<<endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
    void navro(){
        cout<<"this is are navro class"<<endl;
    }
};

int main() {

    Dog d;

    d.eat();   // inherited function
    d.bark();  // own function
    d.harshil();
    d.navro();

}
