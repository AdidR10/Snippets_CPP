#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ull unsigned long long
#define ff first
#define ss second
#define INF (1<<30)
#define LLINF (1<<62)
#define nn printf("\n")
const int mod = 1e9 + 7;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll rand(ll l, ll r) {return uniform_int_distribution<ll>(l, r) (rng);}
const int N = 1e6;

ll n, p, x, a;
ll ar[N];
ordered_set<pair<ll, ll>>st;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        st.clear();
        cin >> n >> p >> x >> a;

        ll s = 0;
        ll mxs = 0;
        int done = 0;

        for(int i = 0; i<n; i++)
        {
            cin >> ar[i];
            s += ar[i];
            if(st.size() >= a)
            {
                ll last = -(*st.find_by_order(a-1)).ff;
                if(ar[i] > last)
                {
                    mxs -= last;
                    mxs += ar[i];
                    st.insert({-ar[i], i});
                }
            }
            else
            {
                mxs += ar[i];
                st.insert({-ar[i], i});
            }

            if(s - mxs > p + x)
            {
                cout << i;
                done = 1;
                break;
            }
        }
        if(!done) {
            cout << n;
        }
        cout << "\n";
    }
}






