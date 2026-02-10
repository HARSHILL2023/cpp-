#include <iostream>
#include <cstdio>
using namespace std;


int main(){

        int array[5];
        for(int i=0;i<5;i++){
            scanf("%d",&array[i]);
        }

        int total=0;
        int avg=0;
        

        for(int j=0;j<5;j++){
            total+=array[j];
        }

        avg=total/5;


        printf("%d\n",total);
        printf("%d",avg);

          

        for(int k=0;k<5;k++){
                if(array[k]>avg){
                    printf("%d\n",array[k]);
                }
        }

}