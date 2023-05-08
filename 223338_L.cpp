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

    int n, ans, tmp;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cout << 1 << " ";
        tmp = 1;
        for (int j = 1; j <= i; j++){
            ans = tmp + v[j];
            cout << ans << " ";
            tmp = v[j];
            v[j] = ans;
        }
        cout << endl;
    }


    return 0;
}
