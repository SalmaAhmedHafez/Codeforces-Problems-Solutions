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
    int t, n, ans;
    cin >> t;
    while(t--){
        cin >> n;
        ans = n;
        vector <int> v(n + 1);
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = n - 1; i >= 0; i--){
            if(v[a[i]] > 0){
                break;
            }
            else {
                v[a[i]]++;
                ans--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

