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
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n;
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x & 1)
                sum1 += x;
            else
                sum2 += x;
        }
        cout << (sum2 > sum1 ? "YES" : "NO") << endl; 
    }
    return 0;
}