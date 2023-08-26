#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <bitset>
#include <queue>
#include <stack>
#include <complex>
#include <cmath>
#include <climits>
#include <cstring>
#include <iomanip>
#include <numeric>
#include <cassert>
 
using namespace std;
 
#define prnt(v)           \
    for (auto &a : v)     \
        cout << a << " "; \
    cout << endl;
#define ll long long
#define ull unsigned long long
#define yesOrno(x) cout << (x ? "YES\n" : "NO\n")
#define intcin(x)     \
    for (auto &a : x) \
        cin >> a;
#define gcd(a, b) __gcd(a, b)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rev(v) reverse(all(v))
#define sortA(v) sort(all(v))
#define sortD(v) sort(rall(v))
#define sum(v) accumulate(all(v), 0)
#define Vmax(v) *max_element(all(v))
#define Vmin(v) *min_element(all(v))
#define pb(x) push_back(x)
#define endl "\n"
#define sz(x) (int)x.size()
#define int ll
const int MOD = 1e9 + 7;
 
typedef vector<string> vs;
typedef vector<vector<string>> vvs;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ull> vull;
typedef vector<ll> vll;
 
void n()
{
    cout << "NO" << endl;
}
 
void y()
{
    cout << "YES" << endl;
}
 
ull fact(ull n)
{
    ull res = 1;
 
    while (n--)
        res *= (n + 1);
    return (res);
}
 
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
 
bool isPalin(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
        if (s[i] != s[s.length() - i - 1])
            return false;
    return true;
}
 
ll exp(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return (res);
}

void solve()
{
}

 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int cases;
    cases = 1;
    // cin >>cases;
    while (cases--)
        solve();
    return (0);
}
