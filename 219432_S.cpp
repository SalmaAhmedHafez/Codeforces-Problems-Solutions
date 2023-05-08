
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
    int t, x, y, sum, tmp;
    cin >> t;
    while(t--){
        sum = 0;
        cin >> x >> y;
        if(min(x,y) & 1) 
            tmp = min(x,y)+2;
        else 
            tmp = min(x,y)+1;
            
        for(int i = tmp; i < max(x,y); i+=2)
            sum += i;
        
        cout << sum << endl;
    }



    return 0;
 }

