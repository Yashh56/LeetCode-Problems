#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define sp ' '
#define pi 2 * acos(0.0)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define Yash                    \
    cin.sync_with_stdio(false); \
    cin.tie(0);                 \
    cout.tie(0)

// Control Flow
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b) - 1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a) - 1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)
#define fr(i, n) for (int i = 0; i < (n); i++)
// #define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

// Types
#define ui unsigned int
// #define int long long int
#define us unsigned short
#define ull unsigned long long
#define ll long long
#define ld long double
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

void solve()
{
    int n;
    cin >> n;

    pair<int, int> mpp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> mpp[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> mpp[i].second;
    }
    sort(mpp, mpp + n);
    for (int i = 0; i < n; i++)
    {
        cout << mpp[i].first << " ";
    }
    cout << nl;
    for (int i = 0; i < n; i++)
    {
        cout << mpp[i].second << " ";
    }
    cout << nl;
}

int main()
{
    // Yash;
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
}