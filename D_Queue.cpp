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
vll a(n);
int z=0;//3//
int o=0;//1//
int tw=0;//2/
int th=0;//1/
int f=0//1/
loop(i,n){
    cin>>a[i];
    if(a[i]==0)z++;
    if(a[i]==1)o++;
    if(a[i]==2)tw++;
    if(a[i]==3)th++;
    if(a[i]==5)f++;

    if(z==3 && o==1&& tw==2&&th==1&&f==1){
        cout<<i<<en;
        return;
    }
}
cout<<"0"<<en;
return;


}
//Main.
int main(){
Time to Code
 
sol();
    
    return 0;
}


