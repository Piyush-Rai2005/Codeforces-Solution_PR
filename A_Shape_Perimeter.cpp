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
    ll n,m;
    cin>>n>>m;
    vll x(n),y(n);
ll a=0,b=0,c=0,d=0;
   ll ans=0;
   for(int i=0;i<n;i++){
     ll x,y;
    cin>>x>>y;
    if(i==0){
        ans+=4*m;
        a=x,b=y;
        c=a+m,d=b+m;
    }
    else{
        a+=x,b+=y;
        ans+=(4*m- 2*(c-a + d-b));
        c=a+m,d=b+m;
    }

   }
    cout<<ans<<en;
//   while(n--){
//     ll x,y;
//     cin>>x>>y;
//    a=x, b=y;
//    c=x+m,d=y+m;
//     ans+=(4*m- 2*(c-a + d-b));
    
//    }

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

