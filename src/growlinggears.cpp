#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll optimisedPoint(ll a, ll b, ll c){
    return ((pow(b, 2) - b) / (2 * a)) + c;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll maxpt = 0, gear = 0, a, b, c, optim;
        for(int i = 1; i <= n; i++){
            cin >> a >> b >> c;
            optim = optimisedPoint(a, b, c);
            if(optim >= maxpt){
                maxpt = optim; gear = i;
            }
        }
        cout << gear << endl;
    }
    return 0;
}

/*  T = -aR^2 + bR + c
    dT/dr => 0 = -2aR + b => 2aR = b => R = b/2a
    Topt = -2a(b/2a)^2 + b(b/2a) + c 
    Topt = -b/2a + b^2/2a + c
    Topt = (b^2 - b)/2a + c 
*/