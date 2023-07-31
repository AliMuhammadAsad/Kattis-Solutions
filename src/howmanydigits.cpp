#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll factSize(ll n){
    if(n <= 3) return 1;
    return static_cast<ll>((n * log10(n)) - (n * log10(exp(1))) + log10(2 * M_PI * n) / 2) + 1;
}

int main(){
    ll n;
    while(cin >> n){
        ll size = factSize(n);
        cout << size << endl;
    }
    return 0;
}