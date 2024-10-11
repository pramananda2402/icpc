#include <bits/stdc++.h>
using namespace std;

// Type definitions
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<ll> vll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef unordered_map<int, int> umii;
typedef unordered_map<ll, ll> umll;

// Constants
const int MOD = 1e9 + 7;  // For modulo operations
const int INF = 1e9 + 5;  // Infinity value
const ll LINF = 1e18 + 5; // Long infinity

// Fast IO
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

// Macros for common operations
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // Reverse iteration
#define pb push_back
#define mp make_pair
#define sz(x) (int)x.size()
#define F first
#define S second
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)

// Map-related macros
#define incr_map(m, x) m[x]++            // Increment map counter
#define decr_map(m, x) if (m[x] > 0) m[x]-- // Decrement map counter safely
#define clear_map(m) m.clear()           // Clear the map

// Utility functions
#define mem(a, x) memset(a, x, sizeof(a)) // Fill an array with x
#define checkbit(n, i) (n & (1 << i))     // Check if the ith bit is set
#define setbit(n, i) (n | (1 << i))       // Set the ith bit
#define clrbit(n, i) (n & ~(1 << i))      // Clear the ith bit

// Debugging
#define debug(x) cout << #x << ": " << x << endl
#define debug_v(v) cout << #v << ": "; for(auto &x : v) cout << x << " "; cout << endl;
#define debug_m(m) cout << #m << ": "; for(auto &[k, v] : m) cout << "(" << k << ", " << v << ") "; cout << endl;

// Modular arithmetic
inline ll mod_add(ll a, ll b, ll m = MOD) { return ((a % m) + (b % m)) % m; }
inline ll mod_sub(ll a, ll b, ll m = MOD) { return ((a % m) - (b % m) + m) % m; }
inline ll mod_mul(ll a, ll b, ll m = MOD) { return ((a % m) * (b % m)) % m; }
inline ll mod_pow(ll base, ll exp, ll m = MOD) { ll res = 1; while (exp > 0) { if (exp % 2) res = mod_mul(res, base, m); base = mod_mul(base, base, m); exp /= 2; } return res; }

// GCD and LCM
inline ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
inline ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }


// run function
void run() {
    
}

int main() {
    FAST_IO;

    int t = 1; 
    cin >> t;
    while (t--) {
        run();
    }

    return 0;
}
