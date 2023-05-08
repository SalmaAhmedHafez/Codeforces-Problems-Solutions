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
    //cout << fixed << setprecision(10);

    int a, b, x;
    cin >> a >> b >> x;
    if(a > b) swap(a, b);
    int n = b / x, m = (a-1) / x;
    cout << x * n * (n+1) / 2 - x * m * (m+1) / 2;
    return 0;
}

