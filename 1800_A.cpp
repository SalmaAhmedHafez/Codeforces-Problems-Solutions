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


// permutation 
#define n_perm next_permutation
#define p_perm prev_permutation 
#define vn_perm(x) next_permutation(all(x))
#define vp_perm(x) prev_permutation(all(x))


// fraction
#define fraction(x) cout << fixed << setprecision(x);



signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, n;
    string s, res;
    cin >> t;
    while(t--){
        cin >> n >> s;
        if(s[0] < 97) s[0] += 32;
        res = s[0];
        for(int i = 1; i < n; i++){
            if(s[i] < 97)
                s[i] += 32;
            if(s[i] != s[i-1])
                res += s[i];
        }
        cout << (res == "meow" ? "YES" : "NO") << endl;
    }
    return 0;
}