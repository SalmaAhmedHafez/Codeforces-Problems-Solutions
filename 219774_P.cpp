
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
    int x;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> x;
        while(!(x&1)){
            x /= 2;
            v[i]++;
        }
    }
    cout << *min_element(v.begin(), v.end());
    return 0;
 }
