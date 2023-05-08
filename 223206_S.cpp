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
    int n, k, x, d;
    cin >> n >> k;
    int ans = n;
    while (n--){
        vector <int> v(k+1);
        cin >> x;
        while(x){
            d = x % 10;
            if(d <= k)
                v[d]++;
            x /= 10;
        }
        for(int i = 0; i <= k; i++){
            if(v[i] == 0){
                ans--;
                break;
            }
        }
        
    }
    cout << ans;
    return 0;
}
