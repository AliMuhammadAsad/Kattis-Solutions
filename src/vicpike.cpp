#include<bits/stdc++.h>
using namespace std;

int main(){
    long n, t, a, b, c, to; cin >> n >> t;
    cin >> a >> b >> c >> to;
    vector<long> lstTime; lstTime.push_back(to);
    for(int i = 1; i < n; i++){
        lstTime.push_back((((a * lstTime[i - 1]) + b) % c) + 1);
    }
    sort(lstTime.begin(), lstTime.end());
    long time = 0, pen = 0, sols = 0;
    for(long num: lstTime){
        if(time + num > t) break;
        else{
            sols++; time += num; pen += time; 
        }
    }
    cout << sols << " " << pen % 1000000007 << endl;
    return 0;
}