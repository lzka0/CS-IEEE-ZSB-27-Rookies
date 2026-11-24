#include <bits/stdc++.h>
#define el '\n'


using namespace std;
typedef long long ll;


void fast_io() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
}


void solve() {
    ll n, sum;
    map<ll, size_t> nums;
    cin >> n >> sum;
    for (ll i = 0; i < n; ++i) {
        ll j = 0;
        cin >> j;
        if (nums.find(sum-j) != nums.end() &&  nums[sum - j] != i) {
            cout << nums[sum-j] + 1 << ' ' << i + 1;
            return;
        }
        nums[j] = i;
    }
    cout << "IMPOSSIBLE";
}
int main() {
    fast_io();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
    solve();
}
