
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

int check_greater(int beg, int n, int arr[]){
    int b = 1;
    for(int i = beg; i < n; i++){
        if(arr[i] > arr[i+1]){
            b = 0;
            break;
        }
    }
    return b;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    //cout << fixed << setprecision(10);
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '\\')
            break;
        else 
            cout << s[i];
    }
    return 0;
 }

