#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "8645327";
    //sorting the string in decreasing order
    sort(s.begin(), s.end(), greater<int>());
    cout<< s << endl;
    return 0;
}