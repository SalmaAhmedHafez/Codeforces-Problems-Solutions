
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
    
    int n;
    cin >> n;
    int a[n+1];
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i < n; i++){
        a[i] = a[i-1] +a[i-2];
    }
    cout << a[n-1];
    return 0;
 }
