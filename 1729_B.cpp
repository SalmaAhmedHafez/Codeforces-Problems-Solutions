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
    int t, n, tmp;
    cin >> t;
    string s, ans;
    while(t--){
        cin >> n >> s;
        ans = "";
        for(int i = n - 1; i >= 0; i--){
            tmp = s[i] - '0';
            if(s[i] == '0'){
                tmp = (s[i-2] - '0') * 10 + s[i-1] - '0';
                i -= 2;
            }
            ans += (char)(tmp + 96);
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}

