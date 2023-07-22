#include<iostream>
#include<cmath>
using namespace std;

string primeCheck(long long int n) {
    if (n <= 1) return "NO";
    if (n <= 3) return "YES";
    if (n % 2 == 0 || n % 3 == 0) return "NO";
    else {
        for (long long int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return "NO";
            }
        }
    }
    return "YES";
}

int main() {
    long long int n; cin >> n;
    cout << primeCheck(n) << endl;
    return 0;
}
