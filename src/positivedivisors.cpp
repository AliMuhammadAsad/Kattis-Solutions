#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> divs;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            divs.push_back(i);
            if(i != n / i) divs.push_back(n / i);
        }
    }
    sort(divs.begin(), divs.end());
    for(int div: divs){
        cout << div << endl;
    }
    return 0;
}