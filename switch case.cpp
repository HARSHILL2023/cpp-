#include<iostream>
using namespace std;

enum word{
    LOW,
    MEDIUM,
    HIGH
};

int main(){
    enum word a1 = LOW;
    enum word a2 = MEDIUM;
    enum word a3 = HIGH;

    cout << "The value retured by a2 is  " << a2 << endl;

    switch (a3)
    {
    case 0: cout<< "the case0 is exceuted"<<endl; break;
    case 1: cout<< "the case1 is exceuted"<<endl; break;
    default: cout<< "the default case is exceuted"<<endl; break;
    }
    return 0;
}