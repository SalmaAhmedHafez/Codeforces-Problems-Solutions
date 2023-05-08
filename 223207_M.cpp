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
    int n = s.length(), cnt = 0, ans = n;
    bool p = 1;
    char ch = s[0];
    for(int i = 0; i < n / 2; i++){
        if(s[i] != s[n - i - 1]){
            p = 0;
            break;
        }
        else{
            if(s[i] == ch) 
                cnt += 2;
        }
    }
    if(p){
        if((n & 1) && s[n / 2] == ch) cnt++;
        if(cnt == n)
            ans = 0;
        else
            ans = n - 1; 
    }
    cout << ans;
}
