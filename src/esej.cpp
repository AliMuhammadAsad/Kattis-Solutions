#include<bits/stdc++.h>
using namespace std;

string faltuwords(int n){
    string s;
    while(n > 0){
        s.push_back(n % 26 + 'a');
        n /= 26;
    }
    return s;
}

int main(){
    int a, b; cin >> a >> b;
    for(int i = 1; i <= b; i++) cout << faltuwords(i) << " ";
    return 0;
}