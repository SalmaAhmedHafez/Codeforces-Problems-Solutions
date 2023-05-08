
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
    int t, n;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        n = s.size();
        for(int i = n-1; i >= 0; i--)
            cout << s[i] << " ";
        cout << endl;    
    }
    
    return 0;
 }

