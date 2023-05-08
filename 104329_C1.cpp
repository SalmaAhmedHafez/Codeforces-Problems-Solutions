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

// permutation 
#define n_perm next_permutation
#define p_perm prev_permutation 
#define vn_perm(x) next_permutation(all(x))
#define vp_perm(x) prev_permutation(all(x))


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //cout << fixed << setprecision(10);
    int t, n, a, b;
    cin >> t;
    while(t--){
        cin >> n;
        a = 1;
        b = n * 2;
        for(int i = 0; i < n; i++){
            cout << a << " " << b << " ";
            a += 2;
            b -= 2;
        }
        cout<< endl;
    }
    return 0;
}
