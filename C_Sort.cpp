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
    ll n,q;
    cin>>n>>q;
    string a;
    cin>>a;
    string b;
    cin>>b;
    ll l,r;
    a='#'+a;
    b='#'+b;
    loop(i,q){
   cin>>l>>r;
    
    ll p=(r-l)+1;
    string c;
    string d;
    floop(i,l,r){
        c[i-l]=a[i];
        d[i-l]=b[i];
    }
    // cout<<c;
    // cout<<d;
    sort(c.begin(),c.end());   
    sort(d.begin(),d.end());
    // c='#'+c;
    // d='#'+d;
    ll cnt=0;    
    string e;
    loop(i,p){
        loop(j,p){
            if(c[i]==d[j]){
                cnt++;
                break;
            }
        }
    }
    cout<<p-cnt<<en;
    }

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

