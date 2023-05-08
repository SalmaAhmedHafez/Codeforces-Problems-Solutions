
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
    string s;
    cin >> s;
    string ss = s;
    int tmp, n = s.size();
    reverse(s.begin(), s.end());
    for(int i = 0; i < n; i++){
        if(s[i] != '0'){
            tmp = i;
            break;
        }
    }
    cout << s.substr(tmp, n-tmp) << endl;
    cout << (s == ss ? "YES" : "NO"); 
 }
