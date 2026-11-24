#include <bits/stdc++.h>
#define el '\n'


using namespace std;
typedef long long ll;


void fast_io() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
}



void solve() {
    ll X, n;
    cin >> X >> n;
    vector<ll> w(n);
    vector<bool> att(n, false);
    while (n--) {
        cin >> w[w.size() - n - 1];
    }
    ll q;
    cin >> q;
    while (q--) {
        ll i;
        cin >> i;
        if (att[i-1]) {
            X -= w[i-1];
            att[i-1] = false;
        }
        else {
            X += w[i-1];
            att[i-1] = true;
        }
        cout << X << el;
    }

}
int main() {
    fast_io();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
    solve();
}
