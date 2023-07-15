#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n1, n2;
    while(cin >> n1 >> n2){
        long long int diff = n1 - n2;
        if(diff >= 0){cout << diff << endl;}
        else if(diff < 0){cout << -1*diff << endl;}  
    }
    return 0;
}

// Runtime: 0.00s