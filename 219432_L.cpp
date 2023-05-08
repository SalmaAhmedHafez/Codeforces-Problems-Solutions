
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
    int a, b;
    cin >> a >> b;
    int mx = max(a,b);
    int mn = min(a,b);

    for(int i = mn; i >= 0; i--){
        if(mx % i == 0 && mn % i == 0){
            cout << i;
            break;
        }
    }


 }

