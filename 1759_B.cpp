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
    int t, n, x, sm, tmp;
    cin >> t;
    while(t--){
        cin >> n >> sm;
        int mx = -1;
        for(int i = 0; i < n; i++){
            cin >> x;
            sm += x;
            if(x > mx)
                mx = x;
        }
        bool flag = 0;
        while(1){
            tmp = mx * (mx + 1) / 2;
            if(tmp == sm){
                flag = 1;
                break;
            }
            else if(tmp > sm){
                break;
            }
            mx++;
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}

