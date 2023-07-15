#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int c, k; cin >> c >> k;
    int zeros = pow(10, k);
    double cDouble = static_cast<double>(c) / zeros;
    double rounded = round(cDouble);
    int result = static_cast<int>(rounded * zeros);

    cout << result << endl;
    return 0;
}