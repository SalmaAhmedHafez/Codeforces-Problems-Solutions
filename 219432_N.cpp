
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
    char c;
    cin >> c;
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        while(n--)
            cout << c;
        cout << endl;
    }
    return 0;
 }

