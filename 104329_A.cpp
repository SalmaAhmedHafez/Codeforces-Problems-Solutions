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


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //cout << fixed << setprecision(10);
    int t, n;
    int a[] = {0, 0, 1, 7, 4, 2, 0, 8};
    cin >> t;
    while(t--){
        cin >> n;
        if(n <= 7) 
            cout << a[n];
        else {
            int n0 = n / 6;
            n %= 6;
            if(n == 1){
                n += 6;
                --n0;
            }
            for(int i = 0; i < n0; i++)
                cout << 0;
            if(n > 0) cout << a[n];
        }
        cout << endl;
    }
    return 0;
}
