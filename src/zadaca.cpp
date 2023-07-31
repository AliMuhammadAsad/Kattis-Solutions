#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    ll t;
    while(b){
        t = b; b = a % b; a = t;
    }
    return abs(a);
}

int main(){
    int n, m, tmp; ll a = 1, b = 1;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp; a *= tmp;
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> tmp; b *= tmp;
    }
    if(a == 1 or b == 1) cout << 1 << endl;
    else{
        ll gd = gcd(a, b); string g = to_string(gd);
        if(g.length() > 9){
            string subs = g.substr(g.length() - 9);
            cout << subs << endl;
        }
        else cout << gd << endl;
    }
    return 0;
}