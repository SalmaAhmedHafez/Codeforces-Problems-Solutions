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
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    if((a[0] + a[1]) > a[2]){
        double s = 0.5 * (a[0] + a[1] + a[2]), area = sqrt(s * (s-a[0]) * (s-a[1]) * (s-a[2]));
        cout << "Valid" << endl << area;
    }
    else 
        cout << "Invalid";
    return 0;
}