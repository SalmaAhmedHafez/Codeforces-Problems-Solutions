
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
    int a[m];

    while(n--){
        for(int i = m-1; i >= 0; i--)
            cin >> a[i];

        for(int i = 0; i < m; i++)
            cout << a[i] << " ";
        
        cout << endl;
    }
    return 0;
 }

