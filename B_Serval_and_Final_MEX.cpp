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
    ip(n);
    vll a(n);
    loop(i,n) cin>>a[i];

    vll vis(n,0);

    int flag=1;
    for(auto it: a){
        if(it==0){
            flag=0;
            break;
        }
    }
    if(flag){
        cout<<1<<en;
        cout<<1<<" "<<n<<en;
        return;
    }
    else{
        if(a[n-1] == 0){
            int cnt=0;
            for(auto it: a){
                if(it==0){
                   cnt++;
                }
            }
            if(cnt==1){
                int k=2;
                cout<<2<<en;
                cout<<n-1<<" "<<n<<en;
                cout<<1<<" "<<n-1<<en;
                return;
            }
            else{
                if(cnt==n){
                    cout<<3<<en;
                    cout<<1<<" "<<n-2<<en;
                    cout<<2<<" "<<3<<en;
                    cout<<1<<" "<<2<<en;
                    return;
                }
                else{
                    int ind=-1;
                    for(int i=0;i<n;i++){
                        if(a[i] != 0){
                            ind=i;
                            break;
                        }
                    }
                    if(ind == 0){
                        int k=2;
                        cout<<2<<en;
                        cout<<2<<" "<<n<<en;
                        cout<<1<<" "<<2<<en;
                        return;
                    }
                    else{
                        int k=3;
                        cout<<3<<en;
                        cout<<1<<" "<<n-2<<en;
                        cout<<2<<" "<<3<<en;
                        cout<<1<<" "<<2<<en;
                        return;
                    }
                }
            }
        }
        else{
            int k=2;
            cout<<2<<en;
            cout<<1<<" "<<n-1<<en;
            cout<<1<<" "<<2<<en;
            return;
        }
    
    }
    
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


