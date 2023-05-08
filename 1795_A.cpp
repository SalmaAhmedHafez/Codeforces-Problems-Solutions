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
    int t, n, m;
    cin >> t;
    string a, b;
    while(t--){
        int cnt = 0;
        bool flag = 1;
        cin >> n >> m >> a >> b;
        reverse(b.begin(), b.end());
        a += b;
        n += m;
        for(int i = 0; i < n-1; i++){
            if(a[i] == a[i+1]){
                cnt++;
                if(cnt > 1){
                   flag = 0;
                   break; 
                }
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
}
