#include<bits/stdc++.h>
using namespace std;

bool cando(double c, double x, double m, double f, double s){
    double cost_hour = x + s / f;
    double time = m / s;
    if(time * cost_hour <= c / 2) return true;
    else return false;
}

int main(){
    double c, x, m, f, res = 0, s;
    cin >> c >> x >> m;
    for(int i = 0; i < 6; i++){
        cin >> s >> f;
        if(cando(c, x, m, f, s) == true) res = s;
    }
    if(res == 0) cout << "NO" << endl;
    else cout << "YES " << res << endl; 
    return 0;
}