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
#define ipvec(a,n)   vll a(n);loop(i,n) cin>>a[i];
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
ip(n);
ipvec(a,n);
sor(a);

umll mpp;
for(auto it: a){
    mpp[it]++;
}
for(int i=0;i<n-1;i++){
    if(a[i+1] != a[i]){
        mpp[a[i]]-=2;
        if(mpp[a[i]] < 0){
            cout<<"No"<<en;
            return;
        }
        if(mpp[a[i]] == 0)continue;
        mpp[a[i]+1]+=mpp[a[i]];
        if(mpp[a[i]+1] <2){
            cout<<"No"<<en;
            return;
        }
        mpp[a[i]]=0;
    }
}
if(mpp[n-1]%2!=0){
    cout<<"No"<<en;
    return;
}
cout<<"Yes"<<en;
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
    
    


