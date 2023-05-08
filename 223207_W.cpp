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
    
    int n, sum1 = 1, sum2 = 0;
    string s, tmp, tmp2;
    cin >> n >> tmp;
    n--;
    while(n--){
        cin >> s;
        if(s == tmp) sum1++;
        else{
            sum2++;
            tmp2 = s;
        }
    }
    cout << (sum1 > sum2 ? tmp : tmp2); 
}

