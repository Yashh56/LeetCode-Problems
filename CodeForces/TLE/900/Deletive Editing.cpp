#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define sp ' '
#define pi 2 * acos(0.0)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define z cout << 0 << endl;

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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t, ans = "";
        cin >> s >> t;
        int a[30], i;
        memset(a, 0, sizeof(a));
        for (i = 0; i < t.size(); i++)
        {
            int x = t[i] - 'A';
            a[x]++;
        }

        for (i = s.size() - 1; i >= 0; i--)
        {
            int x = s[i] - 'A';
            if (a[x])
            {
                ans += s[i];
                a[x]--;
            }
        }
        reverse(ans.begin(), ans.end());
        if (ans == t)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    return 0;
}