#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, q, r, b, kn, p; cin >> k >> q >> r >> b >> kn >> p;
    int ks = 1; int qs = 1; int ro = 2; int bi = 2; int kns = 2; int ps = 8;
    int kings = ks - k; int queens = qs - q; int rooks = ro - r; 
    int bishops = bi - b; int knights = kns - kn; int pawns = ps - p;
    cout << kings << " " << queens << " " << rooks << " " << bishops << " " << knights << " " << pawns;
    return 0;
}