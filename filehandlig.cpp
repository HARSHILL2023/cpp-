#include<iostream>

#include<fstream>

using namespace std;

int main(){

ofstream file;

file.open("sample.txt",ios::app);

if(file.is_open()){
    char info[122]="";
        cin>>info;
        
file << info << endl;
file.close();

}

return 0;
}