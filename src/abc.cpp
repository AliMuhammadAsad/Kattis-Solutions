#include<bits/stdc++.h>
using namespace std;

int middle(int a, int b, int c){
    int mid;
    if ((a > b && a < c) || (a > c && a < b)) {
        mid = a;
    } else if ((b > a && b < c) || (b > c && b < a)) {
        mid = b;
    } else {
        mid = c;
    }
    return mid;
}

int main(){
    int n1, n2, n3; cin >> n1 >> n2 >> n3;
    string order; cin >> order;
    // cout << n1 << n2 << n3 << order;
    int a = min({n1, n2, n3}); int c = max({n1, n2, n3}); int b = middle(n1, n2, n3);
    if(order == "ABC") cout << a << " " << b << " " << c;
    else if(order == "ACB") cout << a << " " << c << " " << b;
    else if(order == "BAC") cout << b << " " << a << " " << c;
    else if(order == "BCA") cout << b << " " << c << " " << a;
    else if(order == "CAB") cout << c << " " << a << " " << b;
    else if(order == "CBA") cout << c << " " << b << " " << a;
    return 0;
}