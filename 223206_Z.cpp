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
    int n;
    string s;
    cin >> n >> s;
    string ans = s;
    int mid = n / 2;
    bool flag = 1;
    if(n % 2 == 0){
        --mid;
        flag = 0;
    }
    int a = mid - 1, b = mid + 1;
    ans[mid] = s[0];

    for(int i = 1; i < n; i++){
        if(flag)
            ans[a--] = s[i];
        else
            ans[b++] = s[i];
        flag = !flag;
    }
    cout << ans;
    return 0;
}
