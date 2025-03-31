#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++){
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];
            }
        int count=0;
        int max=0;
        int hash=0;
         for(int i=0;i<n;i++){
                if(arr[i]=='.'){count++;
                    if(count>=max) max=count;
                }
                else count=0,hash++;
            }
        if(max>=3) cout<<2<<endl;
        else cout<<n-hash<<endl;

}
}