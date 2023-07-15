#include<bits/stdc++.h>
using namespace std;

int main(){
    int s; cin >> s;
    int p = 1; int sp = 0; int d = 0;
    while(sp < s){
        if(s - sp > p){
            d += 1; p += p;
        }
        else{
            d += 1; sp += p;
        }
    }
    cout << d;
    return 0;
}