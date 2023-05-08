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
    int t, x;
    bool prime[51] = {0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 
                      0, 0, 1, 0, 1, 0, 0, 0, 1, 0,
                      0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 
                      1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                      0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 
                      0};
    cin >> t;
    while(t--){
        cin >> x;
        cout << (prime[x] ? "prime" : "not prime") << endl;
    }
    return 0;
}
