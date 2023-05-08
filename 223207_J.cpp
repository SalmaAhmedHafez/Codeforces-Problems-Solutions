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
    int n, k, x, y;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    while(k--){
        cin >> x >> y;
        x--;
        a[x - 1] += y - 1;
        a[x + 1] += a[x] - y;
        a[x] = 0;
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << endl;
}
