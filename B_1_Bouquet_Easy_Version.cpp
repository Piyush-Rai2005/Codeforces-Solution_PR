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
#define en '\n'
#define pb(x) push_back(x)
#define eb(x) emplace_back(x)


// Aliases:
using ll = long long int;
using ld = long double;
using ull = unsigned long long;
// using fir = first;
// using sec = second;

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

//solution
void maxp(ll &p, vll& a, ll &max,ll &m){
    if(max>=m||p<0) return;
    rloop(i,p-1,-1){
            if(max<=(m-a[i]) && a[i]==a[p]||a[i]==(a[p]-1)) max+=a[i];
            else{ ll max2=a[i];
                maxp(i,a,max2,m);
                if(max2>max) max=max2;
            }
            // else {
            //     ll t=a[i];
            //     ll max2=t;
            //     if(i>0&& a[i-1]==t||a[i-1]==(t-1)) max2+=a[i-1];
            // }
        }
         
        return;

}
void sol(){
    ll n,m;
    cin>>n>>m;
    vll a(n);
    loop(i,n){
        cin>>a[i];
    }
    ll max=0;
    sort(a.begin(),a.end());
    max=a[n-1];
    ll p=n-1;
    maxp(p,a,max,m);
    cout<<max<<en;
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

