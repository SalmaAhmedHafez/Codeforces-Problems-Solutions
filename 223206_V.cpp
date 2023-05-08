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
    int a[n], b[n];
    string ans = "maybe";
    bool flag = 1;
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        if(a[i] != b[i]){
            flag = 0;
            ans = "rated";
        }
    }
    if(flag){
        sort (a, a+n, greater <>());
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                ans = "unrated";
                break;
            }
        }
    }
    cout << ans;
    return 0;
}
