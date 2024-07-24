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
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

// Types
#define ui unsigned int
#define us unsigned short
#define ull unsigned long long
#define ll long long
#define ld long double
// #define int long long int
// #define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<pair<int, int>>
#define vll vector<pair<ll, ll>>
#define pii pair<int, int>
typedef pair<int, int> PII;

// Utils
#define len(x) int((x).size())
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }

// const int MOD = 1e9 + 7;
const int MOD = 998244353;
bool as_second(const pii &a, const pii &b) {
    return a.second < b.second;
}
int main()
{
    ll n;
    cin >> n;
    vii P;
    for (ll i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        P.push_back({x, y});
    }
    // sort(all(P));
    sort(P.begin(), P.end(),as_second);
    ll ans = 0, temp = 0, i = 0;

    while (i < n)
    {
        if (temp <= P[i].first)
        {
            temp = P[i].second;
            i++;
            ans++;
        }
        else
        {
            i++;
        }
    }
    cout << ans << nl;
}