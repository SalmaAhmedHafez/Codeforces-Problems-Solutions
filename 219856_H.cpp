
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
    int t;
    cin >> t;
    string s, ans;
    while(t--){
        cin >> s;
        ans = "Bad";
        for(int i = 0; i < s.size()-2; i++){
            if(s[i] != s[i+1] && s[i+1] != s[i+2]){
                ans = "Good";
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
 }

