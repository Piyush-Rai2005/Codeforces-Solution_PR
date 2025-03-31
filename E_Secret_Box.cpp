#include<bits/stdc++.h>
using namespace std;

//for speed.
#define Time ios::sync_with_stdio(false);
#define to cin.tie(NULL);
#define Code  cout.tie(NULL);

// Aliases:
using ll = long long int;
using ld = long double;
using ull = unsigned long long;

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
void sol(){
    ll x,y,z,k;
    cin>>x>>y>>z>>k;
    ll ans=0;
    ll max=0;
    for(int a=1;a<=x;a++){        
    for(int b=1;b<=y;b++){        
        ll c;
        if(k%(a*b)==0){ c=k/(a*b);
        if(c<=z){
        ans=((x-a)+1)*((y-b)+1)*((z-c)+1);
        }
        }

        if(max<=ans) max=ans;
    }}
    cout<<max<<endl;

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

