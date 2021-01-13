#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};

    for(int i =0;i<3;i++){
        for(int j =i;j<3;j++){
            //only have to swap upper part 4,7,8 with 2,3,6 thats why j=i as diagonal remains same
            //swap
            int temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }

    //print transpose
    for(int i = 0;i<3;i++){
        for (int j =0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}