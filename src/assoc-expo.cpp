#include<bits/stdc++.h>
using namespace std;

unsigned long long int power(unsigned long long int base, unsigned long long int expo){
    unsigned long long int r = 1;
    while(expo > 0){
        if(expo%2 == 1) r *= base;
        base *= base;
        expo /= 2;
    }
    return r;
}

int main(){
    unsigned long long int a, b, c; cin >> a >> b >> c;
    // if(pow(a, pow(b, c)) != pow(pow(a, b), c)) cout << "Oh look, a squirrel!";
    // else cout << "What an excellent example!";
    if(power(a, power(b, c)) != power(power(a, b), c)) cout << "Oh look, a squirrel!";
    else cout << "What an excellent example!";
    return 0;
}