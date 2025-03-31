#include<bits/stdc++.h>
using namespace std;

//for speed.
#define Time ios::sync_with_stdio(false);
#define to cin.tie(NULL);
#define Code cout.tie(NULL);

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
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;

//solution_Code
void sol(){
    ll n,m;
        cin>>n>>m;

        string s;
        cin>>s;

        vll ind(m);
        ll j=1;
        while(j<=m){
            int ele=0;
            cin>>ele;
            ind.push_back(ele);
            ele=0;
            j++;
        }

        string c;
        cin>>c;

        sort(ind.begin(),ind.end());
        sort(c.begin(),c.end());

        auto nv =unique(ind.begin(),ind.end());
        ind.erase(nv,ind.end());

        for(ll i=0; i<ind.size();i++){
          
                s[ind[i]]=c[i];
        }
        cout<<s<<endl;


}

//Main.
int main(){
//    Time to Code
    ll t;
    cin>>t;
    while(t--){
        sol();
    }
    return 0;
}
