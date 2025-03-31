#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    for(int i=0;i<N;i++){
        if(arr[i]>=0 && min>=0){
       if(arr[i]<=min){
        min=arr[i];
       }}
       else if(arr[i]<0 && min>=0){
        if((arr[i]*(-1))<=min){
        min=(arr[i]*(-1));
       }
    }
     else{
        if((arr[i]*(-1))<=(min*(-1))){
        min=(arr[i]*(-1));
       }

    }
    cout<<min<<endl;
    
}

