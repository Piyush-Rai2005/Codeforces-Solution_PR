#include<bits/stdc++.h>
using namespace std;

//time taken to code & submit== min3//

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
#define sortV(v) sort(v.begin(),v.end())
#define rsortV(v) sort(v.rbegin(),v.rend())
#define minV(arr)  *min_element(arr.begin(), arr.end())
#define maxV(arr)  *max_element(arr.begin(), arr.end())
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


//solution


void sol(){
 ll n;
 cin>>n;
 vector<ll>arr(n);
 ll a=INT_MAX;
 ll b = INT_MAX;
 ll sum =0;
 for (ll i=0;i<n;i++) {
    ll len;
    cin>>len;
    vector<ll>brr(len);
    for (ll j=0;j<len;j++) {
        cin>>brr[j];
    }
    sortV(brr);
    sum+=brr[1];
    if (a>brr[0]) a=brr[0];
    if (b>brr[1]) b = brr[1];

 }
    cout<<sum-b+a<<endl;
 
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

