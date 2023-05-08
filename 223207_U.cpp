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
    int n, x;
    cin >> n;
    string ans;
    while(n--){
        cin >> x;
        ans = "NO";
        if(x == 4) ans = "YES";
        else if((x & 1) && x != 1){
            if((ll)ceil(sqrt(x)) == (ll)floor(sqrt(x))){
                int sq = sqrt(x), sqq = sqrt(sq);
                bool flag = 1;
                for(int i = 2; i <= sqq; i++){
                    if(sq % i == 0){
                        flag = 0;
                        break;
                    }
                }
                ans = flag ? "YES" : "NO";
            }
        }
        cout << ans << endl;
    }
}
