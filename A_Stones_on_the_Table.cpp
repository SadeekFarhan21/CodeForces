#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <char> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int ans = 0;
    for(int i = 0; i < n - 1; i++){
        if(v[i] == v[i + 1]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}