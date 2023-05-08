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
    bool flag = 0;
    string s;
    cin >> n >> s;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    vector <int> v;
    for(int i = 0; i < n - 1; i++){
        if(s[i] == 'R' && s[i + 1] == 'L'){
            flag = 1;
            v.push_back((a[i + 1] - a[i]) / 2);
        }
    }
    cout << (flag ? *min_element(v.begin(), v.end()) : -1);
}
// 2 4 6 10
