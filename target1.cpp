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
ll n;
cin>>n;
ips(s);
ll wat=0;
ll jes=0;

for(ll i=0;i<n;){
    if(i==0){
    if(s[i]=='.' && s[i+1]=='.'){
        wat++;
        i+=2;

    }
    else i++;
    }
    else{
        if(s[i]=='.' && s[i+1]=='.'&& s[i-1]=='.'){
            wat++;
            i+=2;
        }
        else i++;
        }
    if(i==n-1 ){
    if(s[i]=='.' && s[i-1]=='.'){
        wat++;
        i+=2;
    }
    else i++;
    }
    }

for(ll i=1;i<n;){
    if(i==1 ){
    if(s[i]=='.' && s[i+1]=='.'){
        jes++;
        i+=2;
    }
    else i++;
    }
    else{
        if(s[i]=='.' && s[i+1]=='.'&& s[i-1]=='.'){
            jes++;
            i+=2;
        }
        else i++;
        }
    if(i==n-1 ){
    if(s[i]=='.' && s[i-1]=='.'){
        jes++;
        i+=2;
    }
    else i++;
    }

}
if(wat>jes){

cout<<wat<<" "<<jes<<en;
}
else cout<<jes<<" "<<wat<<en;
 

}
//Main.
int main(){
   Time to Code
    
        sol();
  
    return 0;
}

