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

    string s1, s2;
    cin >> s1 >> s2;
    int a = s1.length(), b = s2.length(), n = min(a,b), ans = a+b;
 
    while(n--){
        if(s1[a-1] == s2[b-1]){
            --a;
            --b;
            ans -= 2;
        }
        else
            break;
    }
    cout << ans;
    return 0;
}