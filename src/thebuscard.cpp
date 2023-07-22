#include<iostream>
using namespace std;

int main(){
    int k; cin >> k;
    int ts = 0;
    while(k > 0){
        if(k > 400){
            k -= 500; ts++;
        }
        else if(k >= 150){
            k -= 200; ts++;
        }
        else{
            k -= 100; ts++;
        }
    }
    cout << ts << endl;
    return 0;
}