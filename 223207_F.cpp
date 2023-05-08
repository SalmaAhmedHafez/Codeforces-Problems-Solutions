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
    int t, n;
    cin >> t >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int b[n - t + 1];
    for(int i = 0; i < n - t + 1; i++)
        b[i] = a[i + t - 1] - a[i];
    cout << *min_element(b, b + n - t + 1);
}
