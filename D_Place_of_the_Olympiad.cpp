#include<bits/stdc++.h>
using namespace std;

//time taken to code & submit== solved myself//

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
#define sor(v) sort(v.begin(),v.end())
#define rsor(v) sort(v.rbegin(),v.rend())
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
ll n,m,k;
cin>>n>>m>>k;

auto isPoss=[&](ll mid){
    if(m%(mid+1)==0 ){
        ll t=m/(mid+1);
        if(t*mid*n >=k)return true;
        else return false;

    }
    else if((m+1)%(mid+1)==0){
        ll t=(m+1)/mid+1;
        if(t*mid*n >=k)return true;
        else return false;
    }
    return false;
};

ll low=1;
ll high=m;
while(low<high){
    ll mid=(low+high)/2;
    if(isPoss(mid)){
        high=mid;
    }
    else low=mid+1;
}
cout<<low<<en;
return;
    
}
//Main.
int main(){
Time to Code
    ll ttt;
    cin>>ttt;
    while(ttt--){
        sol();

    }
    return 0;
}


