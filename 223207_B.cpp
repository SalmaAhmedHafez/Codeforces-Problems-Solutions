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
    int n;
    cin >> n;
    if(n == 0) {
        cout << 1;
        return 0;
    }
    n %= 4;
    int a[] = {6, 8, 4, 2};
    cout << a[n];
}