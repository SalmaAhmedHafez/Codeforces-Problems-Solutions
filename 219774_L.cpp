
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
    
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-i; j++){
                cout << *max_element(a+j, a+i+j+1) << " ";
            }
        }
        cout << endl;
    }


    return 0;
 }
