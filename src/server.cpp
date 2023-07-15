#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t; cin >> n >> t;
    int tasks = 0;
    while((true) && (n--)){
        int j; cin >> j;
        if(j > t) break;
        else{
            t = t - j; tasks++;
        }
    }
    cout << tasks << endl;
    return 0;
}

// Runtime 0.00s