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
    int n, ans = 0;
    cin >> n;
    int a[] = {200, 100, 20, 10, 5, 1};
    for(int i = 0; i < 6; i++){
        if(n >= a[i]){
            int tmp = n / a[i];
            ans += tmp;
            n -=  tmp * a[i];
        }
    }
    cout << ans; 
    return 0;
}
