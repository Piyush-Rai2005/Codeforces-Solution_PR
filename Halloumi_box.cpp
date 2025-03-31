#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,k;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];
            }

            int count=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]<=arr[i+1]) count++;
            else break;
        }
        if(k==1 && count != n-1) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
            
    }
}
