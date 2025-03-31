#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,x;
    for(int i=0;i<t;i++){
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];
            }

            int max=arr[0];
            for(int i=0;i<n-1;i++){
                if((arr[i+1]-arr[i])>max){
                    max=(arr[i+1]-arr[i]);
                }
            }
            if(max<2*(x-arr[n-1])){
                max=2*(x-arr[n-1]);
            }
            cout<<max<<endl;     
    }
}
