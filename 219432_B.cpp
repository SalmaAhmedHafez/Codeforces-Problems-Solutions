
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
    if(n < 2)
        cout << -1;

    else{
        for (int i = 2; i <= n; i+=2)
            cout << i << endl;
    }
    
}
