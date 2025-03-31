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


    void sol(){
    ll n;
    cin>>n;
    vector<int> a(n);
    loop(i,n) cin>>a[i];
    vector<int> b(n);
    loop(i,n) cin>>b[i];
    
    bool flag1=false;
    bool flag2=false;
    sor(a);
    sor(b);
    int cnt1=0;
    int cnt2=0;
    loop(i,n-1){
        if(a[i] != a[i+1]){
            flag1=true;
            cnt1++;
        }
    }
    loop(i,n-1){
        if(b[i] != b[i+1]){
            flag2=true;
            cnt2++;
        }
    }
    if(!flag1){
        if(!flag2){
            cout<<"NO"<<en;
            return;
        }
        else{
            if(cnt2<2){
               cout<<"NO"<<en;
            return;
            }
            else {
                cout<<"YES"<<en;
                return;
                }
        }
    }
    else{
        if(!flag2){
            if(cnt1<2){
               cout<<"NO"<<en;
            return;
            }
            else {
                cout<<"YES"<<en;
                return;
                }
        }
        else {
                cout<<"YES"<<en;
                return;
                }
    }
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

