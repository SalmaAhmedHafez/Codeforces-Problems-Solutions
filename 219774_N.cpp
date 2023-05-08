
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
    
    int a, b;
    string s, ans = "Yes";
    cin >> a >> b >> s;

    if(s[a] != '-')
        ans = "No";
    else{
        for(int i = 0; i < a+b+1; i++){
            if (i == a)
                continue;
            if(s[i] < '0' || s[i] > '0'+9){
                ans = "No";
                break;

            }
        }
    }
    cout << ans;
    return 0;
 }
