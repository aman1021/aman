#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){

        int space =n-i;
        for(int j =1;j<=space;j++){
            cout<<" ";

        }

        for(int j=1;j<=i;j++){
            string ch[10] = {"A", "B", "C" , "D" , "E"};
            cout<<ch[j-1];
        }
        cout<<endl;
    }

    return 0;
}