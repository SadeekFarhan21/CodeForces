#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n; cin >> n;
    vector <ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (ll i = 0; i < n - 1; i++) {
        v[i] = v[i] * v[i + 1];
        v[i + 1] = 1;
        swap(v[i + 1], v[i]);
    }
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        ans += v[i];
    }
    cout << ans * 2022 << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}