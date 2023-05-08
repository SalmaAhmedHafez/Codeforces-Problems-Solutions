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
    int n, x, d, count = 0; 
    cin >> n >> x;
    char c;
    while(n--){
        cin >> c >> d;
        if(c == '+')
            x += d;
        else{
            if(d <= x)
                x -= d;
            else 
                count++;
        }
    }
    cout << x << " " << count << endl;
    return 0;
}
