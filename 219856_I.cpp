
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
    string s, ans = "YES";
    cin >> s;
    int n = s.size(), a = 0, b = n-1;
    for(int i = 0; i < n/2; i++){
        if(s[a] != s[b]){
            ans = "NO";
            break;
        }
        ++a;
        --b;
    }
    cout << ans;
    return 0;
 }

