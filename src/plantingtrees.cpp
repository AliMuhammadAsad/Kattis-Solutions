#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n; cin >> n; 
    // priority_queue<int> q;
    // for(int i = 0; i < n; i++){
    //     int s; cin >> s; q.push(s);
    // }
    // int d = 2, res = 0;
    // while(q.size()){
    //     res = max(res, q.top() + d++);
    //     q.pop();
    // }
    // cout << res << endl;

    int n; cin >> n; vector<int> days(n);
    for(int i = 0; i < n; i++) cin >> days[i];

    sort(days.begin(), days.end(), greater<int>());
    for(int i = 0; i < n; i++) days[i] += i + 2;
    
    int maxVal = *max_element(days.begin(), days.end());
    cout << maxVal << endl;
    return 0;
}