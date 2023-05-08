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
    ull a, b, x, y, ans1, ans2, ans3;
    cin >> a >> b;
    x = min(a,b);
    y = max(a,b);

    ans1 = y*(y+1)/2 - x*(x-1)/2;
    ull lst = (ll)ceil(y / 2.0);
    ull tmp = x;
    if(!(x & 1)) tmp++;
    tmp -= 2;
    tmp = tmp / 2 + 1;
    ans3 = lst * lst - tmp * tmp;
    ans2 = ans1 - ans3;

    cout << ans1 << endl << ans2 << endl << ans3; 
    return 0;
}