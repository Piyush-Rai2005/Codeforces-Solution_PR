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
    ll d1,d2,x,y,k;
    cin>>d1>>d2>>x>>y>>k;

    ll sum=0;
    vll arr(k);
    for(int i=0;i<k;i++){
        if(i==0){
            arr[0]=min(x,d1-x);
        }
        else if(i==1){
            arr[1]=max(x,d1-x);
        }
        else{
            arr[i]=arr[i-2]+d1;
        }
    }
    vll brr(k);
    for(int i=0;i<k;i++){
        if(i==0){
            brr[0]=min(y,d2-y);
        }
        else if(i==1){
            brr[1]=max(y,d2-y);
        }
        else{
            brr[i]=brr[i-2]+d2;
        }
    }
    for(int i=0;i<k;i++){
        arr.push_back(brr[i]);
    }
    sort(arr);  
    cout<<arr[k-1]<<en;


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

