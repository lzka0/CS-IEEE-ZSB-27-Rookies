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
    vector<ll> ex1, ex2;
    ll target = ((n*n) + n)/2;
    if (target%2) {
        cout << "NO";
        return;
    }
    target /= 2;
    cout << "YES" << el;
    ll sum = 0;
    for (ll i = n; i > 0; --i) {
        if (sum + i <= target) {
            sum += i;
            ex1.push_back(i);
        }
        else ex2.push_back(i);
    }
    cout << ex1.size() << el;
    for (const ll& i : ex1) cout << i << ' ';
    cout << el << ex2.size() << el;
    for (const ll& i : ex2) cout << i << ' ';
}
int main() {
    fast_io();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
    solve();
}
