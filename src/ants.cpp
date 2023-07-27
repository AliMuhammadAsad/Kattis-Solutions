#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int l, n; cin >> l >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int lo = min(v[0], l - v[0]); int hi = max(v[0], l - v[0]);
        for(int i = 0; i < n; i++){
            lo = max(lo, min(v[i], l - v[i]));
            hi = max(hi, max(v[i], l - v[i]));
        }
        cout << lo << " " << hi << endl;
    }
    return 0;
}