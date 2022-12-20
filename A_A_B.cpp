#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    cout << s[0] - '0' + s[2] - '0' << "\n";
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}