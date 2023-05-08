
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
    vector <int> v(n);
    v[0] = 0;
    cout << v[0] << " ";
    if (n > 1){
        v[1] = 1;
        cout << v[1] << " ";
        for(int i = 2; i < n; i++){
            v[i] = v[i-1] + v[i-2];
            cout << v[i] << " ";

        }
    
    }

    return 0;
 }

