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
    cin >> n;
    int arr[n], a = 0, b = n-1, ans1 = 0, ans2 = 0;
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    bool flag = 1;
    while(n--){
        if(arr[a] > arr[b]){
            if(flag)
                ans1 += arr[a];
            else
                ans2 += arr[a];
            a++;
        }
        else {
            if(flag)
                ans1 += arr[b];
            else 
                ans2 += arr[b];
            b--;
        }
        flag =!flag;
    }
    cout << ans1 << " " << ans2;
    return 0;
}
