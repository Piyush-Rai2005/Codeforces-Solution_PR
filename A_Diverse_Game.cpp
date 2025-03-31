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
    ll n,m;
    cin>>n>>m;
    vvit arr(n,vit(m));
    loop(i,n){
        loop(j,m){
            cin>>arr[i][j];
        }      
    }
    loop(i,n){
        int  temp = arr[i][0];
        loop(j,m-1){
            if(j<m-2) arr[i][j+1]=arr[i][j];
        }      
            arr[i][m-1]=temp;
        
    }
    loop(j,m){
        int  temp= arr[0][j];
        loop(i,n-1){
        if(i<n-2) arr[i+1][j]=arr[i][j];
        }      
        arr[n-1][j]=temp;
       
    }
    loop(i,n){
        loop(j,m){
            cout<<arr[i][j]<<" ";
        }      
        cout<<en;
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

