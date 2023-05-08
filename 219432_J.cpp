
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
    int n, flag;
    cin >> n;
    cout << 2 << " ";
    for(int i = 3; i <= n; i+=2){
        flag = 0;
        for(int j = 2; j <= i/2; j++){
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0) 
            cout << i << " ";
    }
 }
