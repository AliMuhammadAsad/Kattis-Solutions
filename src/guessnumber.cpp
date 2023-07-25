#include<bits/stdc++.h>
using namespace std;

int main(){
    int lo = 1, hi = 1000;
    int mid; string inp;
    while(true){
        mid = (lo + hi) / 2;
        cout << mid << endl;
        cin >> inp;
        if(inp == "correct") break;
        else if(inp == "lower") hi = mid;
        else lo = mid + 1;
    }
    return 0;
}