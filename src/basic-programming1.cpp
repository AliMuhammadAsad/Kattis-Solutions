#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t; cin >> n >> t;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(t == 1){
        cout << 7;
    }
    else if(t == 2){
        if(arr[0] > arr[1]) cout << "Bigger";
        else if(arr[0] == arr[1]) cout << "Equal";
        else cout << "Smaller";
    }
    else if(t == 3){
        int sortarr[3] = {arr[0], arr[1], arr[2]};
        sort(sortarr, sortarr + 3);
        cout << sortarr[1];
    }
    else if(t == 4){
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }
        cout << sum;
    }
    else if(t == 5){
        int sumeven = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] % 2 == 0) sumeven += arr[i];
        }
        cout << sumeven;
    }
    else if(t == 6){
        for(int i = 0; i < n; i++){
            arr[i] = arr[i] % 26;
        }
        char alphs[n];
        for(int i = 0; i < n; i++){
            alphs[i] = 'a' + arr[i];
        }
        for(int i = 0; i < n; i++){
            cout << alphs[i];
        }
    }
    else if(t == 7){
        int i = 0; vector<bool> visited(n, false);
        while(i >= 0 && i < n){
            if(visited[i]){
                cout << "Cyclic"; return 0;
            }
            visited[i] = true;
            if(i == n - 1){
                cout << "Done"; return 0;
            }
            i = arr[i];
        }
        cout << "Out"; return 0;
    }
    return 0;
}