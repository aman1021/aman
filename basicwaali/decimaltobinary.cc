#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=0;
    int binum[64];

    while(n>0){
       
       binum[i] =n%2;
       n/=2;
       i++;
    }
     //cout<<binum[i]<<endl;
   // for(int j =i-1; j>=0 ; j--){
       // cout<<binum[j];  
    //}
    int j = i-1;
    while(j>=0){
       cout<< binum[j];  //printing array in reverse order
        j--;
    }


   cout<<endl;
   return 0;
}