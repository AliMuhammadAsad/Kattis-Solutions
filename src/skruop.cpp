#include<bits/stdc++.h>
using namespace std;

int main(){
    int vol = 7, n; cin >> n; cin.ignore();
    string req;
    for(int i = 0; i < n; i++){
        getline(cin, req);
        if(req == "Skru op!" && vol < 10) vol++;
        else if(req == "Skru ned!" && vol > 0) vol--;
    }
    cout << vol << endl;
    return 0;
}