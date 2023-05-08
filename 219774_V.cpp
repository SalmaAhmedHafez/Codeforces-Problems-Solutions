
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
    int n, m, x;
    cin >> n >> m;
    vector <int> v(m+1);

    while(n--){
        cin >> x;
        v[x]++;
    }

    for(int i = 1; i <= m; i++)
        cout << v[i] << endl;
    return 0;
 }

