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
    int n, x, sum = 0, sum1;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        sum += x;
    }
    sum1 = sum;
    for(int i = 0; i < n-1; i++){
        cin >> x;
        sum -= x;
    }
    cout << sum << endl;
    sum1 -= sum;
    for(int i = 0; i < n-2; i++){
        cin >> x;
        sum1 -= x;
    }
    cout << sum1;
}