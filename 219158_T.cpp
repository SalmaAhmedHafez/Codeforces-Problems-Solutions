
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
   
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    int arr[3] = {a[0], a[1], a[2]};
    sort(arr, arr+3);

    cout << arr[0] << endl << arr[1] << endl << arr[2] << endl << endl;
    cout << a[0] << endl << a[1] << endl << a[2];


}
