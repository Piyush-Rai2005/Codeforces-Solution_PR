#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,k;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        int arr[n];
        int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      for(int i=0;i<n;i++){
        if(arr[i]==k) count++;
      }
      if(count!=0) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}
