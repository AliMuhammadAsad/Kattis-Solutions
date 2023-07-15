// INCOMPLETE

#include<bits/stdc++.h>
using namespace std;

int main(){
    int w, p; cin >> w >> p;
    vector<int> parts;
    parts.push_back(0);
    for(int i = 0; i < p; i++){
        int a; cin >> a;
        parts.push_back(a);
    }
    parts.push_back(w);
    vector<int> possibs;
    for(int i = p + 2; i >= 0; i--){
        for(int j = i - 1; j >= 0; j--){
            if(find(possibs.begin(), possibs.end(), parts[i] - parts[j]) == possibs.end()){
                possibs.push_back(parts[i] - parts[j]);
            }
        }
    }
    sort(possibs.begin(), possibs.end());
    for(int i : possibs){
        cout << i << " ";
    }
    // for(int i : parts){
    //     cout << i << " ";
    // }
    return 0;
}