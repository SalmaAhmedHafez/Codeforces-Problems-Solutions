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
    string s, tmp = "Yes";
    cin >> t;
    while(t--){
        cin >> s;
        n = s.length();
        int i;
        bool flag = 0;
        for(i = 0; i < 3; i++){
            if(s[0] == tmp[i]){
                flag = 1;
                break;
            }
        }
        i++;
        if(flag){
            for(int j = 1; j < n; j++){
                if(i == 3) i = 0;
                if(s[j] != tmp[i]){
                    flag = 0;
                    break;
                }
                i++;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}
