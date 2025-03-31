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

    void dfs(vvll &grid,vvll &vis,int i,int j,int& cnt){

        vis[i][j]=1;
        cnt--;      
        if(i==grid.size()-1){
            if(!vis[0][grid[i][j]-1])
            dfs(grid,vis,0,grid[i][j]-1,cnt);
        }
        else{
            if(!vis[i+1][grid[i][j]-1])
            dfs(grid,vis,i+1,grid[i][j]-1,cnt);
        }
    }
    void sol(){
    ll n,m;
    cin>>n>>m;
    vvll grid(n,vll(m));
    loop(i,n){
        loop(j,m){
            cin>>grid[i][j];
        }
    }
    vvll vis(n,vll(m,0));
    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
 
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
        pq.push({1LL*((i+1)*(j+1)*(i+j+2)),{i,j}});
       } 
    }
    ll ans=0;
    int cnt=n*m;
    while(cnt!=0 && !pq.empty()){
        auto ele=pq.top();
        int i=ele.second.first;
        int j=ele.second.second;
        pq.pop();
        if(!vis[i][j]){
            dfs(grid,vis,i,j,cnt);
            ans+=2*ele.first;
        }
    }
    cout<<ans<<en;




    }
    //Main.
    int main(){

    Time to Code
        sol();
        return 0;
    }

