#include<bits/stdc++.h>
using namespace std;

int strtoint(string s){
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    int coint = stoi(s);
    return coint;
}

int main(){
    int t; cin >> t; cin.ignore();
    while(t--){
        string s1, s2; getline(cin, s1); getline(cin, s2);
        int n1 = strtoint(s1); int n2 = strtoint(s2);
        int n = n1 + n2;
        string fs = to_string(n);
        for(char c: fs){
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}

// Runtime 0.00s