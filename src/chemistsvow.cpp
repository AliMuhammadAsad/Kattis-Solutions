#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> table= {"h", "he", 
    "li", "be", "b", "c", "n", "o", "f", "ne", 
    "na", "mg", "al", "si", "p", "s", "cl", "ar", 
    "k", "ca", "sc", "ti", "v", "cr", "mn", "fe", "co", "ni", "cu", "zn", "ga", "ge", "as", "se", "br", "kr",
    "rb", "sr", "y", "zr", "nb", "mo", "tc", "ru", "rh", "pd", "ag", "cd", "in", "sn", "sb", "te", "i", "xe",
    "cs", "ba", "hf", "ta", "w", "re", "os", "ir", "pt", "au", "hg", "tl", "pb", "bi", "po", "at", "rn", 
    "fr", "ra", "rf", "db", "sg", "bh", "hs", "mt", "ds", "rg", "cn", "fl", "lv", 
    "la", "ce", "pr", "nd", "pm", "sm", "eu", "gd", "tb", "dy", "ho", "er", "tm", "yb", "lu", 
    "ac", "th", "pa", "u", "np", "pu", "am", "cm", "bk", "cf", "es", "fm", "md", "no", "lr" };

    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        s = '*' + s;
        vector<bool> works(s.size(), false);
        works[0] = true;
        for(int i = 0; i <= s.size(); i++){
            for(auto j: table){
                if(j.size() > i) continue;

                int ptr1 = i, ptr2 = j.size() - 1;
                bool g = true;
                while(ptr2 >= 0){
                    if(j[ptr2] != s[ptr1]) g = false;
                    ptr1--; ptr2--;
                }
                if(g && works[i - j.size()]) works[i] = true;
            }
        }
        if(works[s.size() - 1]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

// Solution heavily inspired from mpfiefer