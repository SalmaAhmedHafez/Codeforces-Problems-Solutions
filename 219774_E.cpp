
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

    int n, mn, index = 0;
    cin >> n;
    int a[n];
    cin >> a[0];
    mn = a[0];

    for(int i = 1; i < n; i++){
        cin >> a[i];
        if(a[i] < mn){
            mn = a[i];
            index = i;
        }
    }
    cout << mn << " " << index+1;
    return 0;
 }

