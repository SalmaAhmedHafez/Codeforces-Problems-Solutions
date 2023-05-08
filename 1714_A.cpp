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
    int t, n, h, m, h1, m1;
    cin >> t;
    while(t--){
        int ans1 = 1000, ans2;
        cin >> n >> h >> m;
        while(n--){
            cin >> h1 >> m1;
            h1 -= h;
            m1 -= m;
            if(m1 < 0){
                m1 += 60;
                h1--;
            }
            if(h1 < 0) h1 += 24;
            if(h1 < ans1){
                ans1 = h1;
                ans2 = m1;
            }
            else if(h1 == ans1){
                if(m1 < ans2){
                    ans2 = m1;
                }
            }
        }
        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}

