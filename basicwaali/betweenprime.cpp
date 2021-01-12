#include<iostream>
using namespace std;
 int main(){

     int a,b;
     cout<<"Input 2 numbers:" <<endl;
     cin>>a>>b;

     for(int num=a; num<=b; num++){
         int i;
         for(i=2; i<num; i++){
             if(num%i==0){
                // cout<<"non-prime"<<endl;
                 break;
             }
         }
         if(i==num){
             cout<<num<<endl;
         }
     }
     return 0;
 }