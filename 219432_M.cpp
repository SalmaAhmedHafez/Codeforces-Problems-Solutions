
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
    int a, b, n, tmp, x;
    bool flag, flag1 = 1;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        flag = 0;
        x = i;
        n = log10(i)+1;
        tmp = x % 10;
        while(n--){
            if(tmp != 4 && tmp != 7){
                flag = 1;
                break;
            }
            x /= 10;
            tmp = x % 10;
        }
        if(!flag){
            cout << i << " ";
            flag1 = 0;
        }
    }
    if(flag1) cout << -1;
    return 0;
 }

