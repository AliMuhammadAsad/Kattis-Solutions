#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    for(int a = 1; a <= t; a++){
        int n; cin >> n;
        vector<long long int> v1(n), v2(n);
        for(int i = 0; i < n; i++) cin >> v1[i];
        for(int i = 0; i < n; i++) cin >> v2[i];
        sort(v1.begin(), v1.end()); sort(v2.begin(), v2.end());
        reverse(v2.begin(), v2.end());
        long long int prod = 0;
        for(int i = 0; i < n; i++){
            prod += v1[i] * v2[i];
        }
        cout << "Case #" << a << ": " << prod << endl;
    }
    return 0;
}