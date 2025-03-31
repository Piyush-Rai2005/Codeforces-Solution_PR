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


//solution


void sol(){
ll n,m;
cin>>n>>m;
ll x,y;
cin>>x>>y;
ll arr[n];
ll brr[m];
ll max_x=0;
ll max_y=0;
ll diffx=0;
ll diffy=0;

loop(i,x){
    cin>>arr[i];
}
loop(i,y){
    cin>>brr[i];
}
for(int i=0;i<x+1;i++){
    if(i==0) diffx=arr[i]-0;
    else if(i==x) diffx=n-arr[i];
    else{
    diffx= arr[i]-arr[i-1];
    }
    max_x=max(max_x, diffx);
}
for(int i=0;i<y+1;i++){
    if(i==0) diffy=brr[i]-0;
    else if(i==y)diffy= n-brr[i];
    else{
    diffy= brr[i]-brr[i-1];
    }
    max_y=max(max_y, diffy);
}
cout<<max_y*max_x<<en;

}
//Main.
int main(){
   Time to Code
        sol();
  

    return 0;
}

