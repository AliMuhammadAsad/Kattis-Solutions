#include<bits/stdc++.h>
using namespace std;

int main(){
    string line; getline(cin, line);
    for(int i = 0; i < line.length(); i++){
        if(line[i] == ':'){
            if(i < line.length() - 1 && line[i + 1] == ')') cout << i << endl;
        else if(i < line.length() - 2 && line[i + 1] == '-'  && line[i + 2] == ')') cout << i << endl;
        }
        else if(line[i] == ';'){
            if(i < line.length() - 1 && line[i + 1] == ')') cout << i << endl;
        else if(i < line.length() - 2 && line[i + 1] == '-' && line[i + 2] == ')') cout << i << endl;
        }
    }
    return 0;
}