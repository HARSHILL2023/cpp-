#include <iostream>
#include <vector>

using  namespace std;
    
int main(){

vector<int> v = {1,2,3};

vector<int>::iterator it;

for(it=v.begin(); it!=v.end(); it++)
{
   cout<<*(it);
   cout<<endl; 
}




return 0;
}