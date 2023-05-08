
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
    for(int i = 0; i < n; i++){
        for(int j = n-i-1; j > 0;j--)
            cout << ' ';
        for(int j = 0; j < 2*i+1; j++)
            cout << '*';
        cout << endl;
    }

    for(int i = n-1; i >= 0; i--){
        for(int j = n-i-1; j > 0; j--)
            cout << ' ';
        for(int j = 0; j < 2*i+1; j++)
            cout << '*';
        cout << endl;    
    }
    return 0;
 }

