/*adid_r10*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

const int N = 1e5 + 9, MOD = 1e9 + 7;

void LesGo () {
    int n; cin >> n;
    string s; cin >> s;
    int p = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int ways = s[i] - '0';
        ways += p * 10;
        p = ways;
        ans += ways; 
    }
    cout << ans << '\n';
}

int32_t main () {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t = 1; 
    cin >> t;
    int cc = 1;
    while(t--){
        //cout << "Case " << cc++ << ": ";
        LesGo();
    }
    return 0;
} 