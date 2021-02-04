#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

string s = "agfaehfvhjjv";
//converting the string into uppercase

transform(s.begin(), s.end(), s.begin(), ::toupper);

cout<< s<< endl;

//converting the string into lowercase

transform(s.begin(), s.end(), s.begin(), ::tolower);

cout<< s << endl;

return 0;
}