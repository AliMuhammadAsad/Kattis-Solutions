#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    vector<ll> a(n + 1, 0); vector<ll> b(n + 1, 0);
    a[1] = 1; a[2] = 0; b[1] = 0; b[2] = 1;
    for(int i = 3; i <= n; i++){
        a[i] = a[i - 2] + b[i - 1]; b[i] = a[i - 2] + b[i - 2];
    }
    ll val = a[n] + b[n], mod = pow(10, 9) + 7;
    val = val % mod;
    cout << val << endl;
    return 0;
}