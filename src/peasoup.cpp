#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    bool bigflag = false;
    while(n--){
        int k; cin >> k;
        bool flag1, flag2 = false;
        cin.ignore();
        string resname; getline(cin, resname);
        vector<string> menu;
        for(int i = 0; i < k; i++){
            string men; getline(cin, men);
            menu.push_back(men);
        }
        auto it1 = find(menu.begin(), menu.end(), "pea soup");
        auto it2 = find(menu.begin(), menu.end(), "pancakes");
        if((it1 != menu.end()) && (it2 != menu.end())){
            bigflag = true;
            cout << resname;
            break;
        }
    }
    if(bigflag == false) cout << "Anywhere is fine I guess";
    return 0;
}