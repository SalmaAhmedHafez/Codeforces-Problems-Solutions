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
    int x, y, r, n, a ,b;
    cin >> x >> y >> r >> n;
    while(n--){
        cin >> a >> b;
        if(sqrt((x-a) * (x-a) + (y-b) * (y-b)) <= r)
            cout << "YES";
        else 
            cout<< "NO";
            
        cout << endl;
    }
    return 0;
}