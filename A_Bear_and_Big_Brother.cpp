#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    int ans = 0;
    while(b >= a){
        a *= 3;
        b *= 2;
        ans++;
    }
    cout << ans << "\n";
}