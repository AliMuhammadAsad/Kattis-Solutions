#include<bits/stdc++.h>
using namespace std;

int p1(string s, int size);
int p2(string s, int size);
int p3(string s, int size);

int main(){
    string seq; cin >> seq;
    int s = seq.size();
    cout << p1(seq, s) << "\n" << p2(seq, s) << "\n" << p3(seq, s) << endl;
    return 0;
}

int p1(string s, int size){
    int val = 0; char curr = s[0];
    for(int i = 1; i < size; i++){
        if(curr == 'D') val++;
        else if(curr == 'U' and s[i] == 'D') val+= 2;
        curr = 'U';
    }
    return val;
}

int p2(string s, int size){
    int val = 0; char curr = s[0];
    for(int i = 1; i < size; i++){
        if(curr == 'U') val++;
        else if(curr == 'D' and s[i] == 'U') val += 2;
        curr = 'D';
    }
    return val;
}

int p3(string s, int size){
    int val = 0;
    for(int i = 0; i < size - 1; i++){
        if(s[i] != s[i + 1]) val++;
    }
    return val;
}