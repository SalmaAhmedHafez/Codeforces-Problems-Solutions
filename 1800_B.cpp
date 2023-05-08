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
    int t, n, k, ans, tmp, res;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> k >> s;
        ans = 0;
        vector <int> v1(26), v2(26);
        for(int i = 0; i < n; i++){
            if(s[i] < 97)
                v1[s[i] - 'A']++;
            else
                v2[s[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++){
            tmp = min(v1[i], v2[i]);
            ans += tmp;
            res = (max(v1[i], v2[i]) - tmp) / 2;
            if(res <= k){
                ans += res;
                k -= res;
            }
            else if(k > 0){
                ans += k;
                k = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
