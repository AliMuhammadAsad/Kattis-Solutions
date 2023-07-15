#include<bits/stdc++.h>
using namespace std;

int count_subseqs(int n, int arr[]){
    int count = 0;
    int prefix_sum = 0;
    unordered_map<int, int> prefix_sums;
    prefix_sums[0] = 1;

    for (int i = 0; i < n; i++) {
        prefix_sum += arr[i];
        int diff = prefix_sum - 47;
        count += prefix_sums[diff];
        prefix_sums[prefix_sum]++;
    }

    return count;
}

int main(){
    int t; cin >> t;
    while(t--){
        string bl; getline(cin, bl); cin.ignore();
        int n; cin >> n;
        int arr[n];
        for(int i =0 ; i < n; i++){cin >> arr[i];}
        cout << count_subseqs(n, arr) << endl;
    }
    return 0;
}

// Runtime 0.79s