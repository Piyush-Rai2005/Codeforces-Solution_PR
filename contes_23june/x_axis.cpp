#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
ll t;
cin>>t;
while(t--){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int m1=max({x1,x2,x3});
    int m2=min({x1,x2,x3});
    int f=(m1-m2);
    cout<<f<<endl;

}
}