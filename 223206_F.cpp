/*
Author : Salma Hafez

0 0 0
0   0
0   0
0 0 0

*/



#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ull unsigned long long 
#define ll long long
#define int ll
ull INF = (1ULL << 32);
signed main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    //cout << fixed << setprecision(10);
    int n, m;
    cin >> n >> m;
    bool b = 0;
    for(int i = 0; i < n; i++){
        if(!(i & 1)){
        for(int j = 0; j < m; j++)
                cout << '#';
        }
        else {
            if(b)
                cout << '#';
            for(int i = 0; i < m - 1; i++)
                cout << '.';
            if(!b)
                cout << '#';
            b = !b;
        }
        cout << endl;
    }
    return 0;
}