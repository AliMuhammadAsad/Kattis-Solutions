#include<iostream>
using namespace std;

int main(){
    int n; cin >> n; cin.ignore();
    for(int i = 0; i < n; i++){
        string word; getline(cin, word);
        if(i % 2 == 0) cout << word << endl;
    }
    return 0;
}