
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
    
    int n, m;
    cin >> n >> m;
    int a[n], b[m];

    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    for(int i = 0; i < m; i++)
        cin >> b[i];

    int tmp = 0, flag = 0;
    for(int i = 0; i < n; i++){
        if(a[i] ==  b[tmp]){
            flag++;
            tmp++;
        }
    }
    cout << (flag == m ? "YES" : "NO");
    return 0;
 }

