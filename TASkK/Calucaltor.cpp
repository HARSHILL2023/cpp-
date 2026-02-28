#include <iostream>
#include <map>
#include <fstream>

using namespace std;

map<string, int> m1 = {
    {"Add", 0},
    {"Sub", 0},
    {"Mul", 0},
    {"Div", 0}
};

void fileOperation(int a, int b, double result, char oper){
    cout << "The write operation is initiated.." << endl;
    
    ofstream file("Practice.txt", ios::app);
    
    if(file.is_open()){
        file << "The actual operator is -> " << oper << endl;
        file << "The value of a: " << a << " and value of b: " << b << endl;
        file << "The result is: " << result << endl;
        file << "---------------------------" << endl;
    }
    file.close();
}

class Add{
public:
    void add(int a, int b){
        cout << "The addition of two numbers is: " << a+b << endl;
        fileOperation(a, b, a+b, '+');
        m1["Add"]++;
    }
};

class Sub{
public:
    void sub(int a, int b){
        cout << "The subtraction of two numbers is: " << a-b << endl;
        fileOperation(a, b, a-b, '-');
        m1["Sub"]++;
    }
};

class Mul{
public:
    void mul(int a, int b){
        cout << "The multiplication of two numbers is: " << a*b << endl;
        fileOperation(a, b, a*b, '*');
        m1["Mul"]++;
    }
};

class Div{
public:
    void division(int a, int b){
        if(b != 0){
            cout << "The division of two numbers is: " << a/b << endl;
            fileOperation(a, b, a/b, '/');
            m1["Div"]++;
        }
        else{
            cout << "Cannot divide by zero" << endl;
        }
    }
};

class Cal : public Add, public Sub, public Mul, public Div{
public:
    void displayFrequency(){
        cout << "\nOperation Frequency:\n";
        for(auto &x : m1){
            cout << x.first << " -> " << x.second << endl;
        }
    }
};

int main()
{
    cout << "Execution started...\n";

    Cal c1;

    c1.add(10, 20);
    c1.sub(30, 5);
    c1.mul(4, 6);
    c1.division(20, 4);

    c1.displayFrequency();

    return 0;
}