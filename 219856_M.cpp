
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
    string s, hello = "hello", ans = "NO";
    cin >> s;
    int tmp = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == hello[tmp])
            ++tmp;
        if(tmp == 5){
            ans = "YES";
            break;
        }
    }
    cout << ans;
    return 0;
}

