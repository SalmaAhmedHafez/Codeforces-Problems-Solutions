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

    int a, b;
    cin >> a >> b;
    int p = 1;
    for(int i = a-b+1; i <= a; i++){
        p *= i;
    }
    int c = p;
    for(int i = b; i > 1; i--){
        c /= i;
    }
    cout << c << " " << p;
    return 0;
}

