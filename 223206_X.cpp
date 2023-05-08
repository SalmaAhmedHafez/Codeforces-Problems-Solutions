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
    int n, m, sq, tmp;
    cin >> n >> m;
    for(int i = n+1; i <= m; i++){
        sq = sqrt(i);
        bool flag = 1;
        for(int j = 2; j <= sq; j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag){
            tmp = i;
            break;
        }
    }
    cout << (tmp == m ? "YES" : "NO");
    return 0;
}
