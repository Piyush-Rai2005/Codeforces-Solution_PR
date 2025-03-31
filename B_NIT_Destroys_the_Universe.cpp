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


//solution
void sol(){
    ip(n);
    vll a(n);
    loop(i,n){
        cin>>a[i];
    }
if(n==1){
    if(a[0]==0) {cout<<0<<en;
    return;}
    else {cout<<1<<en;
    return;
    }
}
    ll ans=0;
    for(int i=1;i<n;i++){
        if(i==n-1){
            if(a[i]!=0) ans++;
            else if(a[i]==0 && a[i-1]!=0) ans++;
        }
        else if(a[i]==0 && a[i-1]>0) ans++;
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

