#include <bits/stdc++.h>
using namespace std;

void solve(){
    // Input
    int n, c0, c1, h;
    string s;
    cin >> n >> c0 >> c1 >> h >> s;
    
    // Logic
    int cost = 0;
    if(c0 + h <= c1){
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                cost += (c0 + h);
            }
            else {
                cost += c0;
            }
        }
    }
    else if(c1 + h <= c0) {
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                cost += (c1 + h);
            }
            else {
                cost += c1;
            }
        }
    }
    else {
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                cost += c0;
            }
            else {
                cost += c1;
            }
        }
    }
    cout << cost << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}