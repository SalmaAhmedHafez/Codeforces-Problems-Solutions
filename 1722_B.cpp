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
    int t, n;
    string s1, s2;
    cin >> t;
    while(t--){
        bool flag = 1;
        cin >> n >> s1 >> s2;
        for(int i = 0; i < n; i++){
            if(s1[i] - s2[i] != 0 && abs(s1[i] - s2[i]) != 'G' - 'B'){
                flag = 0;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}
