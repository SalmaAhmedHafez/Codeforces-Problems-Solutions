
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

    int n, a, b, ans = 0, len, x, sum;
    cin >> n >> a >> b;
    for(int i = 1; i <= n; i++){
        sum = 0;
        x = i;
        sum += i % 10;
        while(x > 0){
            x /= 10;
            sum += x % 10;
        }
        if(sum >= a && sum <= b)
            ans += i;
    }
    cout << ans;
    return 0;
 }

