#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 1; cout << n << endl;
    while (true){
        cin >> n;
        if (n > 98) break;
        n += min(3 - n % 3, 2);
        cout << n << endl;
    }    
    return 0;
}