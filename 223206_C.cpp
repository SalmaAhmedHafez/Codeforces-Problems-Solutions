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
    int n, m, sum1 = 0, sum2 = 0, x;
    cin >> n >> m;
    while(n--){
        cin >> x;
        sum1 += x;
    }
    while(m--){
        cin >> x;
        sum2 += x;
    }
    cout << (sum1 == sum2 ? "Yes" : "No");
    return 0;
}
