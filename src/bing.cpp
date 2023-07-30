#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string word, subword;
    unordered_map<string, int> count;
    while(n--){
        cin >> word;
        cout << count[word] << endl;
        subword = "";
        for(int i = 0; i < word.length(); i++){
            subword += word[i]; count[subword]++;
        }
    }
    return 0;
}