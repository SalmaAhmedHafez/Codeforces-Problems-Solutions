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
    string ans = "NO";
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = n - 1; i > 1; i--){
        if(a[i] < a[i - 1] + a[i - 2]){
            ans = "YES";
            break;
        }
    }
    cout << ans;
}
// 8 4 3 2