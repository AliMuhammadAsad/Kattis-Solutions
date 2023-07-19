#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }
    sort(arr, arr+3);
    int d1 = arr[1] - arr[0];
    int d2 = arr[2] - arr[1];
    if(d1 == d2) cout << arr[2] + d2 << endl;
    else if(d1 > d2) cout << arr[0] + d2 << endl;
    else cout << arr[1] + d1 << endl;
    return 0;
}