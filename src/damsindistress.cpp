#include<bits/stdc++.h>
using namespace std;

int main(){
    int res[200001];
    int n, w; cin >> n >> w;
    res[0] = w;
    for(int i = 1; i <= n; i++){
        int d, c, u;
        cin >> d >> c >> u;
        res[i] = max(res[d]-u, c - u);
        w = min(w, res[i]);
    }
    cout << w << endl;
    return 0;
}