#include <bits/stdc++.h>
using namespace std;
int main() {
	int N;
	cin>>N;
	vector<vector<int>> arr(N-1,vector<int> (2));
	for(int i=0;i<N-1;i++){
		cin>>arr[i][0]>>arr[i][1];
	}
	vector<int> adj[N];
	for(int i=0;i<N-1;i++){
		adj[arr[i][0]-1].push_back(arr[i][1]-1);
		adj[arr[i][1]-1].push_back(arr[i][0]-1);
	}
	vector<int> vis(N);
	int cnt=0;
	for(int i=0;i<N;i++){
		if(!vis[i]){
			vis[i]=1;
		for(auto it:adj[i]){
			if(!vis[it]){
				cnt++;
				vis[it]=1;
				break;
			}
		}
	  }
	
	}
	cout<<cnt<<endl;
	return 0;
}