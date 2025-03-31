#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while(t--) {
        ll n,m;
        cin >> n >> m;

        vector<vector<ll>> arr(m, vector<ll>(n));
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                cin >>arr[j][i];
            }
        }


        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                ll m1;
                if(n==1){
                    if(j==0) m1=arr[j+1][i];
                    else if(j==m-1) m1 = arr[j-1][i];
                    else m1=max(arr[j+1][i],arr[j-1][i]);
                }
                else if(m==1){
                    if(i==0) m1=arr[j][i+1];
                    else if(i==n-1) m1 = arr[j][i-1];
                    else m1=max(arr[j][i+1],arr[j][i-1]);
                }
                else {
                if (i == 0) {
                    if (j == 0) m1 = max(arr[j + 1][i], arr[j][i + 1]);
                    else if (j == m - 1) m1 = max(arr[j - 1][i], arr[j][i + 1]);
                    else m1 = max({arr[j - 1][i], arr[j + 1][i], arr[j][i + 1]});
                } 
                else if (i == n - 1) {
                    if (j == 0) m1 = max(arr[j + 1][i], arr[j][i - 1]);
                    else if (j == m - 1) m1 = max(arr[j - 1][i], arr[j][i - 1]);
                    else m1 = max({arr[j - 1][i], arr[j + 1][i], arr[j][i - 1]});
                } 
                else {
                    if(j==0) m1= max({arr[j+1][i],arr[j][i+1],arr[j][i-1]});
                    else if(j==m-1)  m1= max({arr[j-1][i],arr[j][i+1],arr[j][i-1]});
                    else m1 = max({arr[j + 1][i], arr[j][i-1], arr[j][i + 1], arr[j - 1][i]});
                }
                }

                if (arr[j][i] > m1) arr[j][i] = m1;
            }
        }

        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                cout <<arr[j][i] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}
