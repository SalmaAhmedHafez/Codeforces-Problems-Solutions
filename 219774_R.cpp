
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
    
    int n;
    cin >> n;
    int a1[n];
    int a2[n];
    string ans = "yes";
    for(int i = 0; i < n; i++)
        cin >> a1[i];
    for(int i = 0; i < n; i++)
        cin >> a2[i];

    sort(a1, a1+n);
    sort(a2, a2+n);

    for(int i = 0; i < n; i++){
        if(a1[i] != a2[i]){
            ans = "no";
            break;
        }
    }
    cout << ans;
    return 0;
 }
