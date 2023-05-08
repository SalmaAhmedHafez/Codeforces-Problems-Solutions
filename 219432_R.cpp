
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
    int x, y, sum;
    while(true){
        cin >> x >> y;
        if(x <= 0 || y <= 0)
            break;
        else {
            sum = 0;
            for(int i = min(x,y); i <= max(x,y); i++){
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
        }
    }

    return 0;
 }

