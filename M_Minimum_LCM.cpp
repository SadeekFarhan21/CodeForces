#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long s; cin >> s;
    map <long long, pair <long long, long long>> m;
    for(long long i = 1; i <= s; i++){
        long long LCM = std::lcm(i, s - i);
        m.insert({LCM, {i, s - i}});
    }
    for(auto x : m){
        if(x.first != 0){
            cout << x.second.first << " " << x.second.second << "\n";
            break;
        }
    }
    // cout << endl;
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}