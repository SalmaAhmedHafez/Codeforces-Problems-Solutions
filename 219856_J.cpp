
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
    string s; 
    cin >> s;
    vector <int> v(26);
    for(int i = 0; i < s.size(); i++){
        v[s[i]-'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(v[i] > 0){
            cout << char(i+'a') << " : " << v[i] << endl;
        }
    }
    return 0;
 }

