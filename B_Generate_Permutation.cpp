#include<bits/stdc++.h>
using namespace std;

//time taken to code & submit==28.30 min3//

//for speed.
#define Time ios::sync_with_stdio(false);
#define to cin.tie(NULL);
#define Code  cout.tie(NULL);
#define ip(num)      ll num;cin>>num;
#define ips(str)     string str;cin>>str;

//Loops
#define loop(i,n) for(ll i=0;i<n;i++)
#define floop(i,a,b) for(ll i=a;i<b;i++)
#define rloop(i,a,b) for(ll i=a;i>b;i--)
#define sort(v) sort(v.begin(),v.end())
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
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<int> vit;
typedef vector<vit> vvit;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;

//swap//
void swap(ll &a,ll &b){
    ll tmp=a;
    a=b;
    b=tmp;
}
// min//
// ll min2(ll &a, ll &b){
//     if(a>b)return a;
//     else return b;
// }
// //min of 4 numbers//
// ll min4(ll &a, ll &b, ll &c, ll &d) {
//     return min2(min2(a, b), min2(c, d));
// }

// //min of 3 numbers//
// ll min3(ll &a, ll &b, ll &c) {
//     return min2(min2(a, b), c);
// }

//solution
void sol(){
    ip(n);
    ll a[n];
    if(n==1){cout<<1<<en;
    return;}
    if(n&1){
            ll j=0;
        for(ll i=0;i<n;i=i+2){
            if(i!=n-1){a[j]=n-i;
            a[n-j-1]=n-i-1;
            j++;}
            else a[j]=n-i;
        }
        loop(i,n){
            cout<<a[i]<<" ";
        }
        cout<<en;
    }
    else cout<<-1<<en;
}
//Main.
int main(){
   Time to Code
    ll t;
    cin>>t;
    while(t--){
        sol();
    }
    return 0;
}

