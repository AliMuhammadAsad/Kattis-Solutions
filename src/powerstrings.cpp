#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    string str;
    while(cin >> str){
        if(str == ".") break;
        int ans = 1, len = str.size();
        for(int i = 1; i < len; i++){
            if(len % i == 0){
                bool check = true;
                for(int j = i; j < len; j += i){
                    if(str.substr(j, i) != str.substr(0, i)){
                        check = false; break;
                    }
                }
                if(check){
                    ans = len / i; break;
                }
            }
        } 
        cout << ans << endl;
    }
    return 0;
}