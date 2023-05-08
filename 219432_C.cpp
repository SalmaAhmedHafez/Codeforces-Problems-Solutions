
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
   
    int n, x;
    cin >> n;
    int ne = 0, po = 0, o = 0, e = 0;
    while(n--){
        cin >> x;
        if(x & 1) 
            o++;
        else 
            e++;

        if(x < 0) 
            ne++;
        else if(x > 0)
            po++;        
    }
    cout << "Even: " << e << endl << "Odd: " << o << endl << "Positive: " << po << endl << "Negative: " << ne;
    
}
