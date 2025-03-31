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
#define sort(v) sort(v.begin(),v.end())
#define rsort(v) sort(v.rbegin(),v.rend())
#define en '\n'
#define pb(num) push_back(num)
#define eb(num) emplace_back(num)



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

ll gcd(ll a , ll b){
    if(a ==0) return b;
    return gcd(b%a, a);
}
//solution


void sol(){
    ll n,x,y;
    cin>>n>>x>>y;
    vll p(x);
    loop(i,x){
        cin>>p[i]; 
    }
    vll q(y);
    loop(i,y){
        cin>>q[i]; 
    }

    vll v;
    set_intersection(p.begin(), p.end(), q.begin(),
       q.end(), back_inserter(v));
    if(v.size() != 0){
        cout<<-1<<en;
        return; 
    }
   ll c=0;
    ll gp=p[0];
    loop(i,x-1){
        gp=gcd(p[i+1],gp);
    }
    gp= gcd(n,gp);

    for(auto it: q){
        if(it % gp ==0){
            c=1;
            break;
        }
    }
    if(c== 0){
        cout<<gp<<en;
        return;
    }
    else cout<<-1<<en;
    return;
    

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