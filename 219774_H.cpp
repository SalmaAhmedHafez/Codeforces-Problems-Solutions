
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

    int n, tmp;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                tmp = arr[j] + arr[j+1];
                arr[j] = tmp - arr[j];
                arr[j+1] = tmp - arr[j+1];
            }
        }
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";


    // Bubble Sort
    // 4 3 2 1
    // 3 4 2 1
    // 3 2 4 1
    // 3 2 1 4
    // 2 3 1 4
    // 2 1 3 4
    // 1 2 3 4

    return 0;
 }

