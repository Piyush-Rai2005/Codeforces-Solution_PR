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
    vll b(n);
    vll a(n);
    loop(i,n){
        cin>>a[i];
        b[i]=a[i];
    }
    for(ll j=0;j<n;j++){ 
    for(ll i=1;i<n-1;i++){
        if((a[i]>a[i-1])&&(a[i]>a[i+1]))swap(a[i],a[i+1]);
    }
    }
    
    sort(b);
  ll cnt=0;
    for(ll i=0;i<n;i++){
        if(a[i]!=b[i]){
            cout<<"NO"<<en;
            break;
        }
        else cnt++;
    }
    if(cnt==n) cout<<"YES"<<en;
    
      

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

