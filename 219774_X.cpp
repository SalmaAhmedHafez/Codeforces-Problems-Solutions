
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
    int n, m, x, y;
    cin >> n >> m;
    char a[n][m];
    string ans = "yes";

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    cin >> x >> y;
    bool b = 0;
    for(int i = x-2; i <= x; i++){
        for(int j = y-2; j <= y; j++){
            if(i == x-1 && j == y-1)
                continue;
            else if(a[i][j] == '.'){
                ans = "no";
                b = 1;
                break;
            }
            if(b) break;
        }
    }
    cout << ans;
    return 0;
 }

