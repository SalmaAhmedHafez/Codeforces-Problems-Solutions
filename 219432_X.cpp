
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

    
    ll t, n, ans;
    cin >> t;
    while(t--){
        cin >> n;
        ans = 0;
        while(n > 0){
            if(n & 1)
                ans++;
            n /= 2;
        }
        cout << (ll)pow(2,ans)-1 << endl;
    }


    return 0;
 }

