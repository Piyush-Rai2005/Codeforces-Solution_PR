#include <bits/stdc++.h>
using namespace std;
//code by F00l_C0der01//

// for speed.
#define FOOLs ios::sync_with_stdio(false);
#define do cin.tie(NULL);
#define Code cout.tie(NULL);
#define ip(num) \
    int num;    \
    cin >> num;
#define ips(str) \
    string str;  \
    cin >> str;

// Loops
#define fol(i, n) for (ll i = 0; i < n; i++)
#define floop(i, a, b) for (ll i = a; i < b; i++)
#define en '\n'
#define pb(x) push_back(x)
#define eb(x) emplace_back(x)

// Aliases:
using ll = long long int;
using ld = long double;
using ull = unsigned long long;
// using first = fir;
// using second = sec;

// Constants
const ld pi = 3.141592653589793238;
const ll INF = LLONG_MAX;
const ll mod = 1e9 + 7;
const int inf = INT_MAX;

// TypeDefs:
//just remember that only//
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<int> vit;
typedef vector<vit> vvit;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll, ll> umll;
typedef map<ll, ll> mll;
// fools catch a cold in summer's//

// solution
//D0n't get f00led//
void sol()
{
    string s;
    cin >> s;
    ll n = s.size();
    if(n==0){cout<<'a'<<en;
    return;}
    for (ll i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
           s+=(s[n-1]=='a' ? 'b':'a');
           cout<<s<<en;
           return;
        }
        else{
            if(s[i]==s[i+1]){
                if (s[i] == 'a')
            {
                cout << s.substr(0,i+1)+ 'b'+s.substr(i+1,n-i-1) << en;
                return;
            }
            else{
                cout << s.substr(0,i+1)+ 'a'+s.substr(i+1,n-i-1) << en;
                return;
                }
            }
        }
}
}
//main
// FOOOLing YOu with this///
int main()
{
    FOOLs do Code
        ll t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}
