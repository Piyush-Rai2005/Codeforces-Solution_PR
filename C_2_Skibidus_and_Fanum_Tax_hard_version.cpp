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
const ll INF = ll(1E18)+16;
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
vll a(n);
loop(i,n) cin>>a[i];
vll b(m);
loop(i,m) cin>>b[i];
 if(n ==1){
    cout<<"YES"<<en;
    return;
 }
 bool sorted = true; 
 for(int i = 0; i < n - 1; i++) {     
    if(a[i] > a[i + 1]) {         
        sorted = false;             
    }   
} 
if(sorted) {     
    cout<<"YES"<<en;
    return;
} 
int flag=0;
vll ans;
int j=0;
sor(b);
loop(i,n){
    if(i==0) a[i]=min(a[i],b[j]-a[i]);
    else if(i==n-1)a[i]=max(a[i],b[j]-a[i]);
    else{
  

            auto it=lower_bound(b.begin(),b.end(),a[i]+a[i-1]);

            if(it == b.end()) continue;

            ll j=*it;
            if(a[i]<a[i-1] && j-a[i] <a[i-1]) continue;
            a[i] = min((a[i] < a[i-1] ? INF : a[i]), (j-a[i] < a[i-1] ? INF : j-a[i]));
    }
}

sorted = true; 
 for(int i = 0; i < n-1; i++) {     
    if(a[i] > a[i + 1]) {         
        sorted = false;
        break;        
    }   
} 
if(sorted) {     
    cout<<"YES"<<en;
    return;
}
cout<<"NO"<<en;
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


