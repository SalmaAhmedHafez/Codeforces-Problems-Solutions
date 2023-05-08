
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
    cin >> n;
    int a[n], mx = -1000000, mn = 1000000, mx_index, mn_index;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] > mx){
            mx = a[i];
            mx_index = i;
        }
        if(a[i] < mn){
             mn = a[i];
             mn_index = i;
        }  
    }

    int tmp = mx + mn;
    a[mx_index] = tmp - mx;
    a[mn_index] = tmp - mn;

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";


    return 0;
 }
