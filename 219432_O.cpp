
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
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++)
            cout << '*';
        cout << endl;
    }
    return 0;
 }

