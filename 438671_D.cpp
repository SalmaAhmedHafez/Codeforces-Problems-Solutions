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
    int t;
    cin >> t;
    int n;
    string s;
    while(t--){
        cin >> n >> s;
        int a = 0, b = n-1, ans = n;
        for(int i = 0; i < n / 2; i++){
            if(s[a++] == s[b--]){
                break;
            }
            else{
                ans -= 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
