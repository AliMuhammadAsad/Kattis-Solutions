#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n; int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << "\n";
    for(int i = 0; i < n; i++){
        arr[i] = arr[i] % 26;
        cout << arr[i] << " ";
    }
    cout << "\n";
    char alphs[n];
    for(int i = 0; i < n; i++){
        alphs[i] = 'a' + arr[i];
        cout << alphs[i];
    }

    return 0;
}