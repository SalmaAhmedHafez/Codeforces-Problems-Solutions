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
    string s;
    cin >> s;
    int n = s.length(), ans = 0, tmp;
    char p = 'a';
    for(int i = 0; i < n; i++){
        tmp = abs(s[i] - p);
        if(tmp > 13)
            tmp = 26 - tmp;
        ans += tmp;
        p = s[i];
    }
    cout << ans;
    return 0;
}
