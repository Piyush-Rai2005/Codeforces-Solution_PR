#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        int l, r, x;
        cin >> l >> r >> x;
        mp[l] += x;
        mp[r + 1] -= x;
    }

    vector<int> al;
    int sum = 0;
    for (auto& e : mp) {
        sum += e.second;
        al.push_back(sum);
    }

    int ans = 0, maxi = 0;
    unordered_map<int, int> lp;
    for (int i = 0; i < al.size(); ++i) {
        int num = al[i];
        int curr = lp[num - k] + 1;
        lp[num] = max(lp[num], curr);
        if (ans < lp[num] || (ans == lp[num] && maxi > num)) {
            maxi = num;
            ans = lp[num];
        }
    }

    cout << ans << " ";
    for (int i = ans-1; i >=0; i--) {
        cout << maxi - i * k << " ";
    }
    cout << "\n";

    return 0;
}