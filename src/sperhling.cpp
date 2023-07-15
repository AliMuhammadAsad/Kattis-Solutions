#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2; cin >> s1 >> s2;
    int i, count = 0; int res;
    while(s1[i] == s2[i] && (i < s2.length() || i < s1.length())){
        i++; count++;
    }
    res = s1.length() + s2.length();
    res -= 2*count;
    cout << res << endl;
    return 0;
}