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
    vector<ll> vec(n);
    for (ll i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    stack<ll> index;
    for (ll i = 0; i < n; ++i) {
        while (!index.empty() && vec[index.top()] >= vec[i]) index.pop();
        if (index.empty()) cout << "0 ";
        else cout << index.top() + 1 << ' ';
        index.push(i);
    }
}
int main() {
    fast_io();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
    solve();
}
