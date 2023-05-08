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
    int ans = n;
    if(n < 0){
        int l = n % 10, bl = (n / 10) % 10;
        ans /= 10;
        if(bl < l) ans += l-bl;  
    }
    cout << ans;
    return 0;
}
