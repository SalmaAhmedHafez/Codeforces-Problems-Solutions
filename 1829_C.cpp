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
    int t, n, m;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        int mn1 = 1e11, mn2 = 1e11, sm = 1e11;
        for(int i = 0; i < n; i++){
            cin >> m >> s;
            if(s == "01"){
                if(m < mn1)
                    mn1 = m;
            }
            else if(s == "10"){
                if(m < mn2){
                    mn2 = m;
                }
            }
            else if(s == "11"){
                if(m < sm){
                    sm = m;
                }
            }
        }
        sm = min((mn1 + mn2), sm);
        if(sm == 1e11) sm = -1;
        cout << sm << endl;
    }
    return 0;
}
