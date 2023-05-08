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
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int ans = -1;
        vector <int> v(n+1), a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            for(int j = 0; j < a[i]; j++)
                v[j]++;
        }
        for(int i = 0; i <= n; i++){
            if(v[i] == i){
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
