#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,m;
        cin>>n>>m;
        int i=0;
        int j=0;
        char k;
        vector<vector<int>>b;
        while(i<=m && j<=n){
           if(i==m){ cin>>k;
                b.emplace_back(k);
                i=1,j++;}
            else{
                cin>>k;
                b.emplace_back(k);
             i++;
             }
            }
            int si,sj,cnt;
            si=sj=cnt=0;
        while(i<=m && j<=n){
            if(b[i][j]=='#'){
                si=i;
                sj=j;
                break;

            }
            if(i==m){i++;
             i=1,j++;}
            else i++;

        }
         while(i<=m && j<=n){
            if(b[i][j]=='#'){
                j++;
                cnt++;
            }
            if(i==m+1){ i=1,j++;}
            else i++;
        }
        if(cnt==1) cout<<sj<<si<<endl;
        else{
            cout<<sj<<(si+cnt/2)<<endl;
        }
        t--;
    }
}