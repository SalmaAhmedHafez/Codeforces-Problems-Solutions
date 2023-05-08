
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
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int mn = *min_element(a, a+n), count = 0;
    for(int i = 0; i < n; i++){
        if(mn == a[i])
            count++;
   }
   cout << (count & 1 ? "Lucky" : "Unlucky");

    return 0;
 }
