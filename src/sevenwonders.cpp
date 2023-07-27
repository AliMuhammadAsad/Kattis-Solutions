#include<bits/stdc++.h>
using namespace std;

int main(){
    string seq; getline(cin, seq);
    vector<int> v(3, 0);
    for(auto& s: seq){
        if(s == 'T') v[0] += 1;
        else if(s == 'C') v[1] += 1;
        else if(s == 'G') v[2] += 1;
    }
    int minval = *min_element(v.begin(), v.end());
    int pts = pow(v[0], 2) + pow(v[1], 2) + pow(v[2], 2) + (minval * 7);
    cout << pts;
    return 0;
}