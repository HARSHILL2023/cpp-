#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int* ptr;
    int** ptr1 = &ptr;

    // cout << "a: "<<&a<<endl;
    cout << "ptr : "<<ptr<<endl;
    // cout << "ptr1 : "<<**ptr1<<endl;
}