
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
    int a[n*n], sum1 = 0, sum2 = 0, flag1 = 0, flag2 = n-1;
    for(int i = 0; i < n*n; i++){
        cin >> a[i];
        if(i == flag1){
            sum1 += a[i];
            flag1 += n+1; 
        }
        if(i == flag2){
            sum2 += a[i];
            flag2 += n-1;
        }
    }
    sum2 -= a[n*n-1];
    cout << abs(sum1 - sum2);

    return 0;
 }
