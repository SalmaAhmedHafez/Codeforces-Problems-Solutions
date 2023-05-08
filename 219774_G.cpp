
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
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int a = 0, b = n-1;
    string ans = "YES";

    for(int i = 0; i < n/2; i++){
        if(arr[a] == arr[b]){
            ++a;
            --b;
        }

        else {
            ans = "NO";
            break;
        }
    }
    cout << ans;
    return 0;
 }

