#include<bits/stdc++.h>
using namespace std;
void update_query(vector<int> &brr,int i,int j,int x){
    brr[i]+=x;
    brr[j+1]-=x;
}
int main(){
    int arr[5]= {10,5,20,40,0};
    vector<int> brr(6);
    update_query(brr,0,1,10);
    update_query(brr,1,3,20);
    update_query(brr,2,2,30);

    int sum=0;
    for(int i=0;i<5;i++){
        sum+=brr[i];
        arr[i]+=sum;
        cout<<arr[i]<<endl;
    }
return 0;

useEffect(()=>{
    //api call
})