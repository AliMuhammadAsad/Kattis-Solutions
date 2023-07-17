#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a; cin >> n >> a;
    int ships[n];
    for(int i = 0; i < n; i++){
        cin >> ships[i];
    }

    sort(ships, ships + n);

    int w = 0;
    for(int i = 0; i < n; i++){
        if(a > ships[i]){
            w++; a = a - (ships[i] + 1);
        }
        else break;
    }
    cout << w << endl;

    return 0;
}