#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1); getline(cin, s2);
    
    if(s1.length() >= s2.length()) cout << "go" << endl;
    else cout << "no" << endl;
    
    return 0;
}