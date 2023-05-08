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


void display(vector<int> a, int n){
   
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //cout << fixed << setprecision(10);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n == 1) cout << 1;
        else if(n&1)
            cout << -1;
        else {
            int a = n;
            int b = 1;
            for(int i = 0; i < n / 2; i++){
                cout << a << " " << b << " ";
                a -= 2;
                b += 2;
            }
        }
        cout << endl;
    }
    return 0;
}

/*
4 1 2 3
6 1 4 3 2 5 
8 1 6 3 4 5 2 7 
*/