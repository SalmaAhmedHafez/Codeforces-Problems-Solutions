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
    string s;
    cin >> s;
    int n = s.length();
    bool flag = 1;
    for(int i = 0; i <= n / 2; i++){

        if(s[i] == '?' && s[n-i-1] == '?'){
            s[i] = 'a';
            s[n-i-1] = 'a';
        }

        else if(s[i] == '?')
            s[i] = s[n-i-1];
        
        else if(s[n-i-1] == '?')
            s[n-i-1] = s[i];

        else if(s[i] != s[n-i-1]){
            flag = 0;
            cout << -1;
            break;
        }
    }
    if(flag) cout << s;
    return 0;
}
