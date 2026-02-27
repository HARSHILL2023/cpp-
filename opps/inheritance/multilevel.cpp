#include <iostream>
using namespace std;

class laptopp{

public: 
    void laptop(string name,int price){

        cout<<price<<endl;
        cout<<name<<endl;
    }

};

class model : public laptopp {   

public: 
    void hello(){
        cout<<"hello mother fucker"<<endl;

    }
};



int main() {

   model m1;

   m1.laptop("Asus ROG",122121);

   m1.hello();

   return 0;
}