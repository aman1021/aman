#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    int m1[n1][n2];
    int m2[n2][n3];
    //taking m1 input
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
             cin>>m1[i][j];
        }
    }
     //taking m2 input
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
             cin>>m2[i][j];
        }
    }
    //taking an ans matrix to store the multiplied matrix
    int ans[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
             ans[i][j]=0;
        }
    }
    //matrix multiplication
    for(int i=0;i<n1;i++){
        for(int j = 0;j<n3;j++){
            for(int k=0;k<n2;k++){
                ans[i][j]+=m1[i][k]*m2[k][j]; //m1 k liye column change hota rahega with same row and m2 k liye row change hogi with same column 
            }
        }
    }
     //taking  output
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
             cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}