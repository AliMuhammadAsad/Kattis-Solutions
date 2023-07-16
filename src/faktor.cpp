#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    float c = b - 1 + 0.001;
    int rd = ceil(c * a);
    cout << rd << endl;
    return 0;
}