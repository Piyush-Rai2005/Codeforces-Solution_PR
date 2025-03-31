#include<bits/stdc++.h>
using namespace std;

//time taken to code & submit==28.30 min//

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

//solution
void sol(){
    ll l,r;
    cin>>l>>r;
    ll a,b;
    cin>>a>>b;
    ll p[100]={0};
    ll q[100]={0};
    floop(i,l,r+1){
        p[i-1]=1;
    }
    floop(i,a,b+1){
        q[i-1]=1;
    }
    ll cnt=0;
    if(l!=a) cnt++;
    if(r!=b) cnt++;
    ll m=max(l,a);
    ll n=min(r,b);
    floop(i,m,n+1){
        if(p[i-1]==1 && q[i-1]==1)cnt++;
    }
    cout<<cnt-1<<en;
   
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

