#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int N,K,D;
	for(int i = 1;i<=t;i++){
	    int contest=0;
	    cin>>N>>K>>D;
	    
	    int A[N];
	    int sum =0;
	    for(int i = 1;i<=N;i++){
	        cin>>A[i];
	        sum+=A[i];
	    }
	    
	    if(K<=sum){
            
	         contest = sum/K;
	         if(contest>=D){
	             cout<<D<<endl;
	         }
			 else{
				 cout<<contest<<endl;
			 }
             
        }
	        
	    
	    if(K>sum){
	        cout<<0<<endl;
	    }
	}
	return 0;
}
