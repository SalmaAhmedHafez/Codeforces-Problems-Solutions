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
    int n, m;
    cin >> n >> m;
    bool flag = 0;
    int i = n / 2;
    if(n & 1) i++;
    for (i; i <= n; i++){
        if(i % m == 0){
            flag = 1;
            break;
        }
    }
    cout << (flag ? i : -1);
}
