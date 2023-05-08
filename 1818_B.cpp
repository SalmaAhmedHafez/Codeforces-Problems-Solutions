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
#define fast ios::sync_with_stdio(false); cin.tie(0);



signed main() {
    fast;
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n == 1) cout << 1;
        else if(n & 1) cout << -1;
        else{
            for(int i = n; i >= 1; i-= 2){
                cout << i - 1 << " " << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
