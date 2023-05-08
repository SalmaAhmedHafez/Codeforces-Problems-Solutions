
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
        vector <int> v(0);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                v.push_back(a[i]+a[j]+j-i);
            }
        }
        cout << *min_element(v.begin(), v.end()) << endl;
    }




    return 0;
 }
