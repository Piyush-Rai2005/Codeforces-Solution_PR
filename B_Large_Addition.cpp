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
    ll x;
    cin>>x;
    ll n=x;
    ll cnt=0;
    while(n>0){
        n=n/10;
        cnt++;
    }
    n=x;
    for(int i=0;i<cnt;i++){
    if(n%10==9){ cout<<"NO"<<endl;
    return;}
    }
    ll min=0;
    ll max=0;
    for(int i=1;i<cnt;i++){
        min=min*10+5;
        max=max*10+9;
    }
    if(x>=(min*2) && x<=(max*2)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
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

