#include<bits/stdc++.h>
using namespace std;

int countPartitions(int n, const vector<int>& lst){
    int parts = 0;
    vector<int> premax(n, 0); vector<int> sufmin(n, 0);
    premax[0] = lst[0];
    sufmin[n - 1] = lst[n - 1];
    for(int i = 1; i < n; ++i){premax[i] = max(premax[i - 1], lst[i]);}
    for(int i = n - 2; i >= 0; --i){sufmin[i] = min(sufmin[i + 1], lst[i]);}
    if(lst[0] < sufmin[1]){ parts += 1;}
    if(lst[n - 1] > premax[n - 2]){parts += 1; }
    for (int i = 1; i < n - 1; ++i) {
        if (lst[i] > premax[i - 1] && lst[i] < sufmin[i + 1]) {parts += 1;}
    }
    return parts;
}

int main(){
    int n; cin >> n; vector<int> lst(n);
    for (int i = 0; i < n; ++i) { cin >> lst[i]; }
    int partitions = countPartitions(n, lst);
    cout << partitions << endl;
    return 0;
}
