#include<bits/stdc++.h>
using namespace std;

map<int, int> reins;
vector<int> curr;
vector<pair<int, int>> hashes;

bool swap(int n, int prev){
    reins[n]++;
    if(reins[n] >= 3) return false;

    int v;
    if(hashes[n].first == prev) v = hashes[n].second;
    else v = hashes[n].first;

    if(curr[v] == -1){
        curr[v] = n; return true;
    }
    else{
        int temp = curr[v];
        curr[v] = n;
        return swap(temp, v);
    }
}

bool insert(int n){
    if(curr[hashes[n].first] == -1){
        curr[hashes[n].first] = n; return true;
    }
    else if(curr[hashes[n].second] == -1){
        curr[hashes[n].second] = n; return true;
    }
    else{
        int temp = curr[hashes[n].first];
        curr[hashes[n].first] = n;
        return swap(temp, hashes[n].first);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        reins.clear(); curr.clear(); hashes.clear();
        int m, n; cin >> m >> n;
        hashes.resize(m); curr.resize(n, -1);
        
        for(int i = 0; i < m; i++){
            cin >> hashes[i].first; cin >> hashes[i].second;
        }

        bool flag = true;
        for(int i = 0; i < m; i++){
            if(!insert(i)){
                flag = false; break;
            }
            reins.clear();
        }

        if(flag == true) cout << "successful hashing" << endl;
        else cout << "rehash necessary" << endl;
    }
    return 0;
}