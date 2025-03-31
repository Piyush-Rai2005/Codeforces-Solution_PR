#include<bits/stdc++.h>
using namespace std;
//time taken to code & submit==  min//

// Aliases:
using ll = long long int;
using ld = long double;
using ull = unsigned long long;
// using first = fir;
// using second = sec;

//for speed.
#define Time ios::sync_with_stdio(false);
#define to cin.tie(NULL);
#define Code  cout.tie(NULL);
#define ip(num)      ll num;cin>>num;
#define ips(str)     string str;cin>>str;
// #define a.in(n) loop(i,n)cin>>a[i]

//Loops
#define loop(i,n) for(ll i=0;i<n;i++)
#define floop(i,a,b) for(ll i=a;i<b;i++)
#define rloop(i,a,b) for(ll i=a;i>b;i--)
#define sort(v) sort(v.begin(),v.end())
#define en '\n'
#define pb(x) push_back(x)
#define eb(x) emplace_back(x)
    



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
typedef unordered_map<ll,char> umlc;
typedef unordered_map<char,ll> umcl;
typedef map<ll,ll> mll;

//swap//
void swap(ll &a,ll &b){
    ll tmp=a;
    a=b;
    b=tmp;
}

//solution
void sol(){
    ip(n);
    vll a(n);
    loop(i,n) cin>>a[i];
    ip(m);
    string s[m];
    loop(i,m){
    int flag=1;
        cin>>s[i];
        if(s[i].size() == n){
        umlc mp1;
        umcl mp2;
        loop(j,n){
        ll x=a[j];
        char y= s[i][j];
        if(!mp1.count(x)) mp1[x]=y;
        if(!mp2.count(y)) mp2[y]=x;
        if(mp1[x]!=y  || mp2[y]!=x) flag=0;
        }
        }
        else flag=0;
    end:
    cout<<(flag==0 ?"NO" : "YES")<<en;
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

