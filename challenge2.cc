#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        
        int n;
        cin>>n;//aman chandel //

        string s;
        cin>>s;
        for(int k =0;k<n;k=k+4){
            string str = "abcdefghijklmnop";
            string str1 = s.substr(k,k+4);

        int j=0;
        
        while(j<4){
            int l = str.length();
            if(str1.at(j) == '0' ){
                    
                    str = str.substr(0,(l/2));
                    
            }
            else if(str1.at(j) == '1'){
                //int l = str.length();
                str = str.substr((l/2),l);
            }
            j++;
        }
        cout<<str;
        }
        cout<<endl;
    }
    return 0;
}
