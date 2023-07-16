#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, fs; getline(cin, s);
    size_t pos = 0;
    fs += s[0];
    while (pos < s.length()) {
        pos = s.find('-', pos);
        if (pos == string::npos) {
            break;
        }
        if (pos + 1 < s.length()) {
            fs += s[pos + 1];
        }
        pos++;
    }
    cout << fs << endl;
    return 0;
}