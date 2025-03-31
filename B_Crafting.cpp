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
    ll n;
    cin>>n;
    vll a(n);
    loop(i,n) cin>>a[i];
    vll b(n);
    loop(i,n) cin>>b[i];
    int flag=1;
    ll Diff=0;
    ll min_dif=INT_MAX;
    int tag=0;
    loop(i,n){
        ll dif=a[i]-b[i];
        if(dif < 0 ){
            if(tag == 0){
            Diff+=abs(dif);
            tag=1;
            }
            else{
            cout<<"NO"<<en;
            return;
            }
        }
        
        else{
            min_dif= min(min_dif,dif);
        }
    }
    if(min_dif < Diff)flag=0;

    if(flag){
        cout<<"YES"<<en;
        return;
    }
    cout<<"NO"<<en;
    return;

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

