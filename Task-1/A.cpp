#include <bits/stdc++.h>
#define el '\n'


using namespace std;
typedef long long ll;


void fast_io() {

    ios::sync_with_stdio(false);cin.tie(nullptr);

}

void solve() {
    string dna;
    cin >> dna;
    int a = 0, t = 0, c = 0, g = 0, max_rep = 0;
    for (const char& i : dna) {
        if (i == 'A') { ++a; t = 0; c = 0; g = 0; }
        else if (i == 'T') { ++t; a = 0; c = 0; g = 0; }
        else if (i == 'G') { ++g; a = 0; c = 0; t = 0; }
        else { ++c; g = 0; a = 0; t = 0; }
        max_rep = max(max_rep, max(max(a, c), max(g,t)));
    }
    cout << max_rep;
}
int main() {
    fast_io();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
    solve();
}
