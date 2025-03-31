#include<bits/stdc++.h>
using namespace std;

//for speed.
#define Time ios::sync_with_stdio(false);
#define to cin.tie(NULL);
#define Code  cout.tie(NULL);
#define ip(num)      int num;cin>>num;
#define ips(str)     string str;cin>>str;

//Loops
#define loop(i,n) for(ll i=0;i<n;i++)
#define floop(i,a,b) for(ll i=a;i<b;i++)
#define rloop(i,a,b) for(ll i=a;i>b;i--)
#define sort(v) sort(v.begin(),v.end())
#define maxele(v) *max_element(v.begin(),v.end())
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
    ll n;
    cin>>n;
    vll a(n);
    loop(i,n){
        cin>>a[i];
    }
    vll odd;
    vll eve;
   ll ans=0;
    loop(i,n){
        if(a[i]%2!=0) odd.pb(a[i]);
        else eve.pb(a[i]);
    }

  if(odd.size() ==0 || eve.size() ==0) ans=0;
  else if(odd.size() == ceil(n/2.0)||eve.size() == ceil(n/2.0)) ans= ceil(n/2.0);
  else{
    ans=(ll)pow(2.0,(double)abs((odd.size())- eve.size()));
  }
  cout<<ans<<en;
  
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

