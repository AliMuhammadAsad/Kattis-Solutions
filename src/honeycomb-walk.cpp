#include <iostream>
using namespace std;

int depth = 16; int ways[16][16][16];
int stepNum;

void preprocess(int list[]){    
    ways[0][8][8] = 1;

    for (int N = 1; N <= 14; N++){
        for (int i = 1; i <= depth; i++){
            for (int j = 1; j <= depth; j++){
                ways[N][i][j] = ways[N - 1][i][j + 1]
                                + ways[N - 1][i][j - 1]
                                + ways[N - 1][i + 1][j]
                                + ways[N - 1][i - 1][j]
                                + ways[N - 1][i + 1][j - 1]
                                + ways[N - 1][i - 1][j + 1];
            }
        }
        list[N] = ways[N][8][8];
    }
}

int main(){
    int list[15];

    preprocess(list);
    int n, w; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> w;
        cout << list[w] << endl;
    }
    return 0;
}