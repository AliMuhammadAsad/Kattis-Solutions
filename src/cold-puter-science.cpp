#include<iostream>
using namespace std;
int main(){
    int n, t; cin >> n;
    int c = 0;
    for(int i = 0; i < n; i++){
        cin >> t;
        if(t < 0) c++;
    }
    cout << c;
    return 0;
}

// Runtime 0.00s