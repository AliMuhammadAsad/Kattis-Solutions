#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int m; cin >> m;
        double x = 0, y = 0, angle = 0;
        while(m--){
            double deg, dis;
            cin >> deg >> dis;
            angle += deg;
            x += dis * sin(-angle * M_PI / 180.0);
            y += dis * cos(-angle * M_PI / 180.0);
        } 
        cout << setprecision(7) << x << " " << y << endl;
    }
    return 0;
}