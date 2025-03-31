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
ip(n);
ll p1,p2;
cin>>p1>>p2;
vll mpp;
loop(i,n){
 ll f,v,m;
 cin>>f>>v>>m;

ll score=2*f+3*v;
ll spend;
ll build=0;

ll flat = m/p1;
ll p=flat;
ll j=0;
while(p >=0){
spend = p1*p + p2*j;
if(spend <=m){
    build= max(build, spend);
    p--;
    j++;
}
else p--;
}
score+= build;
mpp.push_back(score);
}

ll max_ans=INT_MIN;
for(auto it : mpp)
{
max_ans = max( it, max_ans); 
}
cout<<max_ans<<en;
loop(i, mpp.size()){
    if(mpp[i] == max_ans) cout<<i+1<<" ";
}
cout<<en;


}
//Main.
int main(){
   Time to Code
 
        sol();
  
    
    return 0;
}

