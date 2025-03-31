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
    ll n;
    cin>>n;
    ips(s);
    int flag=1;

double srtn= sqrt(n);
ll sr= (ll)srtn;
if(sqrt(n) == floor(srtn)){
    loop(i,n){
        if(i<sr || i>=n-(sr)){
                if(s[i]=='0')flag=0;
        }
        else if(i>=sr || i<n-(sr)){
            if(i%sr == 0 || (i+1)%sr == 0){
                if(s[i]=='0') flag=0;
            }
        //    if((i+1)%sr == 0){
        //         if(s[i]== '0') flag=0;
        //     }
            else{
                if(s[i]== '1')flag=0;
            }
            
        }
    }
}
else{
    flag=0;
}

if(flag == 0){
    cout<<"NO"<<en;
        return;
}
else{
    cout<<"YES"<<en;
        return;
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

