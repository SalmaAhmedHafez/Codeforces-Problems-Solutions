
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
   
    int a, b, c, ans;
    char ch, chh;
    cin >> a >> ch >> b >> chh >> c;
    switch (ch){
        case '+': {ans = a+b; break;}
        case '-': {ans = a-b; break;}
        case '*': {ans = a*b; break;}
    }

    if (ans == c) 
        cout << "Yes";
    else 
        cout << ans;



}
