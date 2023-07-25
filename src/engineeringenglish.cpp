#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string> ws; string inp;
    while(getline(cin, inp)){
        istringstream iss(inp);
        string word, res;
        while(iss >> word){
            string lower;
            for(char& c: word){lower += tolower(c);}
            if(ws.find(lower) != ws.end()){res += ". ";}
            else{
                res += word + " ";
                ws.insert(lower);
            }
        }
        cout << res << endl;
    }
    return 0;
}