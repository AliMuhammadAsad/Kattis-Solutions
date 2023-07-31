#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 9;

int main(){
    string nfact; cin >> nfact;
    long long int val = 0;
    for(char c: nfact){
        val = (val * 10 + (c - '0')) % mod;
    }
    long long int f = 1; int i = 1;
    while(true){
        f = (f * i) % mod;
        if(f == val){
            cout << i << endl; break;
        }
        i++;
    }
    return 0;
}