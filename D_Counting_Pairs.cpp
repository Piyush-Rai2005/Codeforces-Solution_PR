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
        ll n,x,y;
        cin>>n>>x>>y;
        vll a(n);
        ll sum=0;
        loop(i,n){
            cin>>a[i];
            sum+=a[i];
        }
        ll ans=0;
        sort(a);
        int i=n/2;
        int j=n/2+1;
        ll imax=-1;
        ll jmin=-1;
        int flag=0;
        while(i>=0 && i<n-1){
            ll d=sum-(a[i]+a[i+1]);
            if(d>=x && flag==0){
                i++;
            }
            else if(d<x && flag==0){
                i--;
                flag=1;
            }
            else{
                break;
            }
        }
        while(j>=1 && j<n){
            ll d=sum-(a[j]+a[i-1]);
            if(d<=y) j++;
            else{
                j--;
            }
        }
        if(sum>=x && sum<=y){
            ans++;
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

