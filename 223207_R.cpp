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
    string s, t;
    cin >> s >> t;
    int n = s.length(), m = t.length(), a, b, tmp, r;
    if((n + m - 1) & 1){
        cout << "Impossible";
        return 0;
    }

    for(int i = 0; i < n; i++){
        if(s[i] == '|'){
            a = i;
            break;
        }
    }
    b = n - a - 1;
    if(abs(a - b) > m){
        cout << "Impossible";
        return 0;
    }
    if(a > b){
        tmp = m - a + b;
        if(tmp % 2 == 0){
            r = a - b + tmp / 2;
            s += t.substr(0, r);
            if(r < m)
                s = t.substr(r, m - r) + s;    
        }
        else
            s = "Impossible";
    }
    else{
        tmp = m - b + a;
        if(tmp % 2 == 0){
            r = b - a + tmp / 2;
            s = t.substr(0, r) + s;
            if(r < m)
                s += t.substr(r, m - r);
        }
        else
            s = "Impossible";
    }
    cout << s;
}
