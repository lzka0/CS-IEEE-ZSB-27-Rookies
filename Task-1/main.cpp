#include <bits/stdc++.h>
#define el '\n'


using namespace std;
typedef long long ll;


void fast_io() {

    ios::sync_with_stdio(false);cin.tie(nullptr);

}

void solve() {
    ll n;
    cin >> n;
    set<ll> nums;
    for (ll i = 0; i < n; ++i) {
        ll j;
        cin >> j;
        nums.insert(j);
    }
    cout << nums.size();
}
int main() {
    fast_io();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
    solve();
}
