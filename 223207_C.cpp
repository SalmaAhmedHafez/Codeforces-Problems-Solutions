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
    int s, n, x, y;
    cin >> s >> n;
    string ans = "YES";
    vector <pair<int,int>> v;
    while(n--){
        cin >> x >> y;
        if(s > x) s += y;
        else{
            v.push_back({x, y});
        }
    }
    sort (v.begin(), v.end());
    for(auto &i : v) {
        if(s > i.first) s += i.second;
        else{
            ans = "NO";
            break;
        }
    }
    cout << ans;
    return 0;
}