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

// fast
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);



signed main() {
    fast;
    int t, ans;
    string s, tmp = "codeforces";
    cin >> t;
    while(t--){
        cin >> s;
        ans = 0;
        for(int i = 0; i < 10; i++){
            if(s[i] != tmp[i]){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
