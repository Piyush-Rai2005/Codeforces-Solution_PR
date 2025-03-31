#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> a;
    vector<int> b;
    int zero;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            zero=0;
        }
        if (arr[i] % 7 != 0)
        {
            a.push_back(arr[i]);
        }
    }
    
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 49 == 0)
        { b.push_back(arr[i]);
            
            while (arr[i] / 7 != 0 && arr[i] > 7)
            {
                arr[i] /= 7;
                count++;
            }
        }
    }
    if(zero==0){
        cout<<"YES"<<'\n';
    }
    else if (a.size() <= count)
        cout << "YES"<<'\n';
    else
        cout << "NO"<<'\n';
}