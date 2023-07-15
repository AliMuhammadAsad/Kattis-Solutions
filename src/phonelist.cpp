#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string arr[n]; bool flag = false;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j) continue;
                if(arr[i] == arr[j].substr(0, arr[i].size())){
                    flag = true; cout << "NO" << endl; break;
                }
            }
        }
        if(flag == false){
            cout << "YES" << endl;
        }
    }
    return 0;
}