#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n <= 1) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        vector<pair<int, int>> reps;
        for(int i = 2; i <= x / 2; i++){
            int j = x - i;
            if(isprime(i) && isprime(j)){
                reps.push_back({i, j});
            } 
        }

        cout << x << " has " << reps.size() << " representation(s)" << endl;
        for(const auto& pair: reps){
            cout << pair.first << "+" << pair.second << endl;
        }
        cout << endl;
    }
    return  0;
}

// Runtime 0.08s