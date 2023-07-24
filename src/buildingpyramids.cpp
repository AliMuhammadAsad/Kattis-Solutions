#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n; cin >> n;
    int total = 0, edge = 0, layer = 0;
    while(true){
        if(edge == 0) edge++;
        else edge+=2;
        total += pow(edge, 2);
        if(total <= n) layer += 1;
        else break;
    }
    cout << layer << endl;
    return 0;
}