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
    string s, tmp = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char ch;
    cin >> ch >> s; 
    int flag = 1;
    if(ch == 'R') flag = -1;

    for(int i = 0; i < s.length(); i++){
        for(int j = 0; j < tmp.length(); j++){
            if(s[i] == tmp[j]){
                cout << tmp[j + flag];
                break;
            }
        }
    }  
}

