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
ll n,k;
cin>>n>>k;
ips(s);

bool flag=false;
if(n==1){
    cout<<"NO"<<en;
    return;
}
if(k==0){
    for(int i=0;i<=n/2;i++){
        if(s[n-i-1]-'a'>s[i]-'a'){
            cout<<"YES"<<en;
            return;
        }
        else if(s[n-i-1]-'a' < s[i]-'a') break;
    }
        cout<<"NO"<<en;
        return;
}
int j=n-1;
for(int i=0;i<n;i++){
    if(s[j]-'a' <  s[0]-'a'){
        cout<<"YES"<<en;
        return;
    }
    if(i<n-1 & k>0){
        if(s[i]-'a'<s[j]-'a'){
            cout<<"YES"<<en;
            return;
        }
    }
        if(s[i]-'a'>s[0]-'a'){
            cout<<"YES"<<en;
            return;
        }
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


