#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define sp ' '
#define pi 2 * acos(0.0)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

// Control Flow
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b) - 1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a) - 1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)
// #define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

// Types
#define ui unsigned int
#define us unsigned short
#define ull unsigned long long
#define ll long long
#define ld long double
// #define int long long
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<pair<int, int>>
#define pii pair<int, int>

// Utils
#define len(x) int((x).size())
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }

// const int MOD = 1e9 + 7;
const int MOD = 998244353;

void solve()
{
    int n, x;
    cin >> n >> x;
    vii sum(n);
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        sum[i] = {k, i};
    }
    sort(all(sum));
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (sum[i].first + sum[j].first > x)
        {
            j--;
        }
        else if (sum[i].first + sum[j].first < x)
        {
            i++;
        }
        else
        {
            cout << sum[i].second + 1 << " " << sum[j].second + 1 << nl;
            return;
        }
    }
    cout << "IMPOSSIBLE" << nl;
}

int main()
{
    solve();
}