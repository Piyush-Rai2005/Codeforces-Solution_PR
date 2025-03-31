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


    // void sol(){
    // ll n;
    // cin>>n;
    // vector<string> a(n);
    // vector<vll> adj(n);
    // loop(i,n) cin>>a[i];
    // loop(i,n)adj[i].push_back(i);
    // for(int i=n-1;i>=0;i--){
    //     for(int j=n-1;j>=0;j--){
    //         if(a[i][j] == '1'){
    //         adj[i].push_back(j);
    //         adj[j].push_back(i);
    //         }
    //     }
    // }
    // vector<pair<int,int>> size(n);
    // loop(i,n){
    //     size[i]={adj[i].size(),i};
    // }
    // rsor(size);
    // vll ans(n);
    // loop(i,n){
    //     ans[i]=size[i].second;
    // }
    // loop(i,n){
    //     cout<<ans[i]+1<<" ";
    // }
    // cout<<en;

    // return;
    
    // }


     void sol(){
    ll n;
    cin>>n;
    vector<string> a(n);
    vector<vll> adj(n);
    loop(i,n) cin>>a[i];
    loop(i,n)adj[i].push_back(i);
    
    vector<pair<ll,ll>> row(n);
    loop(i,n){
        ll cnt=0;
        loop(j,n){
            if(a[i] == '1') cnt++;
        }
        row[i]={cnt,i};
    }

    for(int i=n-1;i>=0;i--){

        cout<<
    }
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

