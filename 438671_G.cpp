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
    
    int n;
    string s;
    cin >> n >> s;
    vector<int> cnt('z'+1);
    for(auto &ch : s) {
        cnt[ch]++;
    }
    string ans = "";
    for(char ch = 'a'; ch <= 'z'; ch++) {
        if(cnt[ch]%n) {
            cout << -1;
            return 0;
        }
        cnt[ch]/=n;
        for(int i = 0; i < cnt[ch]; i++) {
            ans += ch;
        }
    }
    while(n--)
        cout << ans;

}

// 