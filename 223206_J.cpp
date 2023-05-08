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
int f(int n){
    bool b = 1;
    while(n){
        if(n % 10 != 4 && n % 10 != 7)
            return 0;
        n /= 10;
    }
     return 1;
}
signed main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    //cout << fixed << setprecision(10);
    int n;
    cin >> n;
    string ans = "NO";
    for(int i = 4; i <= n; i++){
        if(f(i) && n % i == 0){
            ans = "YES";
            break;
        }
    }
    cout << ans;
    return 0;
}
