
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
    int n, x, y;
    cin >> n;
    string s, t;
    while(n--){
        cin >> s >> t;
        x = s.size(), y = t.size();
        int mx = max(x, y);
        for(int i = 0; i < mx; i++){
            if(i < x) cout << s[i];
            if(i < y) cout << t[i];
        }
        cout << endl;
    }
    return 0;
 }

