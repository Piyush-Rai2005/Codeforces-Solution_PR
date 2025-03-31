#include<bits/stdc++.h>
using namespace std;

//for speed.
#define Time ios::sync_with_stdio(false);
#define to cin.tie(NULL);
#define Code  cout.tie(NULL);
#define ip(num)      int num;cin>>num;
#define ips(str)     string str;cin>>str;

//Loops
#define loop(i,n) for(ll i=0;i<n;i++)
#define floop(i,a,b) for(ll i=a;i<b;i++)
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
typedef vector<int> vit;
typedef vector<vit> vvit;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;

//solution
void sol(){
    ll n;
    cin>>n;
   string s[2];
   cin>>s[0]>>s[1];
   ll cnt=0;
    for (ll i = 0; i <2; i++)
    {
    for (ll j = 1; j < n-1; j++)
    {
        if(i==0){
            if(s[i][j]=='.' && s[i+1][j]=='.'&& s[i+1][j-1]=='x'&& s[i+1][j+1]=='x' && s[i][j-1]=='.' && s[i][j+1]=='.' ) cnt++;
        }
        
        if(i==1){
            if(s[i][j]=='.' && s[i-1][j]=='.'&& s[i-1][j-1]=='x'&& s[i-1][j+1]=='x' && s[i][j-1]=='.' && s[i][j+1]=='.' ) cnt++;
        }
    }
    
    }
    cout<<cnt<<en;
    
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

