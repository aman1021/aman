#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans =2; //because in an array we will atleast have a subarray of lrngth 2 with longest arithmetic subarray
    int pd = a[1]-a[0];
    int j = 2; //wile loop iterator starts from 2 beacause we hae seen a[1],a[0] in pd.
    int curr = 2; // same reason as ans above but just for a cuurent subarray we are iterating through.

    while(j<n){

        if(pd==a[j] - a[j-1]){
            curr++;
        }
        else{
            pd = a[j] - a[j-1];
            curr=2;
        }
        ans = max(ans , curr);
        j++;
    }

    cout<<ans<<endl;
    return 0;
}