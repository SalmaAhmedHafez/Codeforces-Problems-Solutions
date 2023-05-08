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
    int t, a[3];
    cin >> t;
    while(t--){
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        cout << a[1] << endl;
    }
    return 0;
}
