
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
    int n, ans = 0;
    string s;
    cin >> n >> s;

    for(int i = 0; i < n; i++)
        ans += s[i] - '0';

    cout << ans;

    
    return 0;
 }
