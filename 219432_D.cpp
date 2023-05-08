
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
   
    string x = "1999";
    string s;
    while(true){
        cin >> s;
        if(s == x){
            cout << "Correct";
            break;
        }
        else
            cout << "Wrong" << endl;
    }
}
