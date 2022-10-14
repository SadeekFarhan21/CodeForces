#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c; cin >> a >> b >> c;
    int x = abs(a - 1);
    int y = 0;
    if(b > c){
        y = abs(b - c);
        y += abs(c - 1);
    }
    else {
        if(c == 1){
            y += abs(c - 1);
        }
        y = abs(c - b);
    }
    if(x == y){
        cout << 3 << "\n";
    }
    else if(x > y){
        cout << 2 << "\n";
    }
    else {
        cout << 1 << "\n";
    }
    return;
    
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}