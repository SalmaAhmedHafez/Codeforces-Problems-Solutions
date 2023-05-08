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
    int t, n, k, ans;
    cin >> t;
    string fst, s;
    while(t--){
        ans = 1;
        cin >> n >> k >> fst;
        for(int i = 1; i < n; i++){
            cin >> s;
            if(s == fst)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
