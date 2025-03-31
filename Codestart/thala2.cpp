#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    long long int arr[n];
    for (long long int i = 0; i < n; i++){
        cin >> arr[i];}
    long long int count=0;
    for(long long int i=0;i<n;i++){
            while(arr[i]%7==0){
                count++;
                arr[i]/=7;
            }
    }
    cout<<count<<endl;
    if(count>=n) cout<<"YES";
    else cout<<"NO";
}