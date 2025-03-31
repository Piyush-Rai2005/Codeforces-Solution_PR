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
ll n,m;
cin>>n>>m;
vll hr(n);
vll dr(m);

loop(i,n) cin>>hr[i];
loop(i,m) cin>>dr[i];

ll dis1=0;
ll dis_end=0;
if(dr[0]>=hr[0]) dis1= dr[0]-hr[0];
else dis1= hr[0]- dr[0];
if(hr[n-1]>=dr[m-1]) dis_end = hr[n-1]-dr[m-1];
else dis1= dr[m-1]- hr[n-1];
ll max_dis=0;
if(m>1){
for(int i=1; i<m; i++){
    max_dis= max(max_dis, (dr[i]-dr[i-1]));
}
}
ll ans= max_dis/2;
ans= max(ans, dis1);

ans= max(ans, dis_end);
cout<<ans<<en;

}
//Main.
int main(){
   Time to Code
 
        sol();
  
    
    return 0;
}

