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

#define int ull
ull INF = (1ULL << 32);

signed main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(10);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double ans = sqrt((a-c) * (a-c) + (b-d) * (b-d));
    cout << ans;
    return 0;
}